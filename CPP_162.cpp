```
#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

#include <openssl/evp.h>
#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    EVP_MD_CTX md_ctx;
    unsigned char* d = nullptr;
    size_t len = 0;
    EVP_PassphraseCallback callback = NULL;
    const EVP_MD *md = EVP_sha256();
    
    int ret = EVP_DigestInit_ex(&md_ctx, md, NULL);
    if (ret != 1) {
        // error handling
    }
    ret = EVP_DigestUpdate(&md_ctx, text.c_str(), text.size());
    if (ret != 1) {
        // error handling
    }
    
    unsigned char* out = new unsigned char[EVP_MAX_DIGEST_SIZE];
    len = EVP_DigestFinal_ex(&md_ctx, out, nullptr);
    string md5_hash;
    for (int i = 0; i < len; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(out[i]);
        md5_hash += oss.str();
    }
    
    delete[] out;
    EVP_MD_CTX_free(&md_ctx);
    
    return md5_hash;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        input = "";
    }

    string md5_hash = string_to_md5(input);
    
    cout << "MD5 Hash: " << md5_hash << endl;
    return 0;
}
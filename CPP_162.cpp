#include <string>
#include <iostream>
#include <sstream>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    EVP_MD_CTX md_ctx;
    EVP_MD_CTX_init(&md_ctx);
    EVP_DigestInit_ex(&md_ctx, EVP_sha1(), NULL);
    EVP_DigestUpdate(&md_ctx, (const unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal_ex(&md_ctx, result, &md_ctx);
    
    string md5_hash;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(result[i]);
        md5_hash += oss.str();
    }
    
    return md5_hash;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    string md5_hash = string_to_md5(input);
    
    cout << "MD5 Hash: " << md5_hash << endl;
    return 0;
}
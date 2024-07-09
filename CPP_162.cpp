#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = NULL;
    const EVP_MD* digest = EVP_get_md_by_name("MD5");
    unsigned char *d = NULL;

    if (!EVP_MD_CTX_create(&mdctx))
        return "Error";

    if (1 != EVP_DigestInit_ex(&mdctx, digest, NULL))
        return "Error";

    if (1 != EVP_DigestUpdate(&mdctx, text.c_str(), text.size()))
        return "Error";
    
    d = (unsigned char*)malloc(EVP_MAX_MD_SIZE);
    if (!d) 
        return "Error";

    if (1 != EVP_DigestFinal_ex(&mdctx, d, NULL))
        return "Error";

    string md5_hash;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(d[i]);
        md5_hash += oss.str();
    }

    free(d);
    EVP_MD_CTX_destroy(&mdctx);

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
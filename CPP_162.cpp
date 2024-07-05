#include <iostream>
#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    
    EVP_MD_CTX* context = EVP_MD_CTX_new();
    if (context == nullptr) return "None";
    
    if (EVP_DigestInit_ex(context, EVP_md5(), nullptr) != 1 ||
        EVP_DigestUpdate(context, text.c_str(), text.size()) != 1 ||
        EVP_DigestFinal_ex(context, digest, &digest_len) != 1) {
        EVP_MD_CTX_free(context);
        return "None";
    }

    EVP_MD_CTX_free(context);

    char mdString[33];
    for (unsigned int i = 0; i < digest_len; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]); 
    }

    return string(mdString);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "MD5: " << string_to_md5(input) << endl;
    return 0;
}
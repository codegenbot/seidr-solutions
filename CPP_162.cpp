#include<string>
#include<openssl/ssl.h>
#include<openssl/x509v3.h>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX md5Context;
    unsigned char hashBytes[16];
    string result;

    // Check if input string is empty
    if (text.empty()) {
        return "";
    }

    // Initialize the MD5 context
    MD5_Init(&md5Context);

    // Update the MD5 context with the input string
    const char* cstr = text.c_str();
    MD5_Update(&md5Context, cstr, text.length());

    // Get the hash value
    MD5_Final(hashBytes, &md5Context);

    // Convert the hash bytes to a hexadecimal string
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", hashBytes[i]);
        result.append(buffer);
    }

    return result;
}
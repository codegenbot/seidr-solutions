#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    const EVP_MD *md = EVP_md5();
    unsigned char* input = (unsigned char*)text.c_str();
    size_t len = text.size();

    if (1 != EVP_DigestInit_ex(&mdctx, md, NULL)) {
        return ""; // initialize context error
    }

    if (1 != EVP_DigestUpdate(&mdctx, input, len)) { 
        return ""; // update context error
    }

    unsigned char* output = new unsigned char[MD5_DIGEST_LENGTH];
    if (1 != EVP_DigestFinal_ex(&mdctx, output, NULL)) {
        delete[] output;
        return ""; // finalize context error
    }
    
    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", output[i]);
        result += buffer;
    }

    delete[] output;
    return result;
}
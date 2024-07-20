#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&md5, ptr, len);
    MD5_Final(result, &md5);

    string output;
    for (int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }
    return output;
}
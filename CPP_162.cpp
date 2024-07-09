#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

using namespace std;

string string_to_md5(string text) {
    const char *text_cstr = text.c_str();
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5(text_cstr, strlen(text_cstr), md);
    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        result += buff;
    }
    return result;
}
#include <string>
#include <sstream>
#include <md5.h>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdValue[16];

    #include <openssl/md5.h>  // Include the OpenSSL library for the necessary functions

    if ((MD5_Init(&ctx)) != 1) { 
        return "";
    }
    const char *ptr = text.c_str();
    size_t len = text.length();

    if (MD5_Update(&ctx, ptr, len) != 1) {
        return "";
    }

    if (MD5_Final(mdValue, &ctx) != 1) {
        return "";
    }

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)mdValue[i];
    }

    return ss.str();
}
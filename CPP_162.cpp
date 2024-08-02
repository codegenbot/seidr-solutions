#include <openssl/md5.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char mdBuffer[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    size_t len = text.length();
    MD5_Update(&mdContext, ptr, len);
    MD5_Final(mdBuffer, &mdContext);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)mdBuffer[i];
    }

    return ss.str();
}
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char* str = text.c_str();
    size_t length = text.length();
    MD5_Update(&md5ctx, str, length);
    MD5_Final(result, &md5ctx);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        oss << setfill('0') << setw(2) << hex << uppercase << (int)result[i];
    }

    return oss.str();
}
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* p = text.c_str();
    size_t len = text.length();
    MD5_Update(&md5, p, len);
    MD5_Final(buffer, &md5);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << (int)buffer[i];
    }

    return ss.str();
}
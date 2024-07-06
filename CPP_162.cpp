#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX* ctx = new MD5_CTX;
    unsigned char md[16];

    MD5_Init(ctx);
    unsigned char* data = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.length();
    MD5_Update(ctx, data, len);
    MD5_Final(md, ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
        result += oss.str();
    }
    delete ctx;

    return result;
}
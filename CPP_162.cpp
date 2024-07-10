#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(buffer, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)buffer[i];
    }

    return ss.str();
}
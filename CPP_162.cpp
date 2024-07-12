#include <string>
#include <sstream>
#include <md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    stringstream ss;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(mdBuffer, &ctx);

    for (int i = 0; i < 16; i++) {
        sprintf(&ss.str()[0], "%02x", (char)mdBuffer[i]);
        ss.seekp(0);
    }

    return ss.str();
}
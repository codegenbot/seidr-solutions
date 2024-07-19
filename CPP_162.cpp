#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    MD5_CTX ctx;
    unsigned char md[16];
    stringstream ss;

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md, &ctx);

    for (int i = 0; i < 16; ++i) {
        sprintf(ss.str().c_str(), "%02x", md[i]);
        ss.seekp(0);
    }

    return ss.str();
}
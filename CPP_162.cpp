#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdValue[16];
    stringstream ss;

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(&ctx, mdValue);

    for (int i = 0; i < 16; ++i) {
        printf("%02x", mdValue[i]);
    }

    return "";
}
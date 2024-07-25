#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdValue[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(mdValue, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)mdValue[i];
    }

    return ss.str();
}
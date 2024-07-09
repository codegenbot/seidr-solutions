#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX ctx;
    unsigned char digest[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(digest, &ctx);

    string result = "";
    for (int i = 0; i < 16; ++i) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << static_cast<int>(digest[i]);
        result += ss.str();
    }

    return result;
}
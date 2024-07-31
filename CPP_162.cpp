#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX ctx;
    unsigned char result[MD5_DIGEST_LENGTH];

    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
        p++;
    }
    MD5_Final(result, &ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << static_cast<int>(result[i]);
    }

    return ss.str();
}
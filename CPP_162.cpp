#include <iostream>
#include <string>
#include <iomanip>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md5, &ctx);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << uppercase << (int)md5[i];
    }

    return oss.str();
}
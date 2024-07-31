#include<string>
#include<openssl/ssl.h>
#include<openssl/err.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* txt = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, txt, len);
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", md[i]);
        ss << std::hex << setfill('0') << setw(2) << (int)md[i];
    }
    return ss.str();
}
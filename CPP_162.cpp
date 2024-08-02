#include <cassert>
#include <string>
#include <openssl/md5>

std::string string_to_md5(const std::string& str) {
    MD5_CTX ctx;
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_Init(&ctx);
    MD5_Update(&ctx, str.c_str(), str.size());
    MD5_Final(digest, &ctx);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    mdString[32] = '\0';

    return std::string(mdString);
}

int test_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}
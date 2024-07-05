#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) return "None";

    MD5_CTX ctx;
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(digest, &ctx);

    char md5_string[33];
    for (int i = 0; i < 16; ++i)
        sprintf(&md5_string[i * 2], "%02x", (unsigned int)digest[i]);

    return string(md5_string);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    cout << "All tests passed!" << endl;
    return 0;
}
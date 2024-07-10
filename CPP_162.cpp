#include <algorithm>
#include <string>
#include <functional>
#include <iostream>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& str) {
    unsigned char buffer[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* cstr = str.c_str();
    MD5_Update(&md5, cstr, str.size());
    MD5_Final(buffer, &md5);

    std::string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char temp[3];
        sprintf(temp, "%02x", buffer[i]);
        result += temp;
    }
    return result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}
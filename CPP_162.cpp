#include <iostream>
#include <cassert>
#include <cstring>
#include <openssl/md5>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char md5String[2*MD5_DIGEST_LENGTH+1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
        sprintf(&md5String[i*2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5String);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}
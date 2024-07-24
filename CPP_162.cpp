```cpp
#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <string>

using namespace std;

std::string string_to_md5(std::string text) {
    MD5_CTX md5ctx;
    unsigned char md5sum[16];
    string output;

    if (text.empty()) {
        return "";
    }

    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(md5sum, &md5ctx);

    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md5sum[i]);
        output += buffer;
    }

    return output;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}
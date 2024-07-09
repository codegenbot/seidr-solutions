```cpp
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char data[text.size()];
    memcpy(data, text.c_str(), text.size());
    EVP_MD5_CTX md5_ctx;
    unsigned char md5_sum[16];
    EVP_MD5Init(&md5_ctx);
    EVP_MD5Update(&md5_ctx, &data[0], text.size());
    EVP_MD5Final(md5_sum, &md5_ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5_sum[i]);
        result += buffer;
    }

    return result;
}

int main() { return 0; }
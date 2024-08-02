#include <openssl/ssl.h>
#include <openssl/err.h>
#include <string>
#include <vector>

using namespace std;

std::string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* cstr = text.c_str();
    MD5_Update(&md5, cstr, text.size());
    MD5_Final(result, &md5);

    string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }

    return output;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}
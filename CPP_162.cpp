#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text);

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    string_to_md5(input);
}

string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(result + strlen(result), "%02x", md5[i]);
    }

    return result;
}
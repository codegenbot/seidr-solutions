#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text);

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "MD5 of the string is: " << string_to_md5(str) << endl;
    return 0;
}

string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; i++) {
        sprintf(result + strlen(result), "%02x", md5[i]);
    }

    return result;
}
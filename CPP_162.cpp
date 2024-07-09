#include <openssl/ssl.h>
#include <string>

int main() {
    string text;
    cout << "Enter your input: ";
    getline(cin, text);
    
    string md5_hash = string_to_md5(text);
    cout << "MD5 Hash: " << md5_hash << endl;
    
    return 0;
}

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) MD5_Update(&ctx, ptr, 1);
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(result + strlen(result), "%02x", md[i]);
    }
    
    return result;
}
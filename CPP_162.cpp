#include <string>
#include <openssl/md5.h>

using namespace std;

int main() {
    #ifdef _OPENSSL_3_0_0-alpha
        // for OpenSSL 3.0, use MD5_Update and MD5_Final with new APIs
        // your code here...
    #else
        string input;
        cout << "Enter the text: ";
        getline(cin, input);
        string result = string_to_md5(input);
        cout << "MD5: " << result << endl;
    #endif

    return 0;
}

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_CTX *ctxptr = &ctx;

    MD5_Init(ctxptr);
    const unsigned char* input = (const unsigned char*)text.c_str();
    size_t len = text.size();

    MD5_Update(ctxptr, input, len);
    MD5_Final(md5, ctxptr);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += string(buffer);
    }

    return result;
}
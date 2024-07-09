#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* str = text.c_str();
    MD5_Update(&mdContext, str, text.size());
    MD5_Final(md5, &mdContext);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        result += sprintf(0, "%02x", md5[i]);
    }
    return result;
}

int main() {
    // Link against the OpenSSL library
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    cout << "MD5 hash of '" << input << "' is " << string_to_md5(input) << endl;
    return 0;
}
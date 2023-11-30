#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)(text.c_str()), text.length(), digest);

    char md5_hash[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5_hash);
}

int main() {
    string text;
    getline(cin, text);

    cout << string_to_md5(text) << endl;

    return 0;
}
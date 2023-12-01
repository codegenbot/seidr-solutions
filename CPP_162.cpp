#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char md5hash[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5hash;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    string md5hash = string_to_md5(text);
    cout << "MD5 Hash: " << md5hash << endl;

    return 0;
}
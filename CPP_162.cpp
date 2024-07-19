#include <string>
#include <cassert>
#include <iostream>
#include <openssl/md5.h>

string string_to_md5(const string& text) {
    assert(!text.empty());

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

int main() {
    string input_text;
    cout << "Enter text: ";
    cin >> input_text;

    cout << "MD5 Hash: " << string_to_md5(input_text) << endl;

    return 0;
}
#include <iostream>
#include <openssl/md5.h>
#include <string>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for(size_t i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return mdString;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = string_to_md5(input);
    cout << "MD5 hash of the input string: " << result << endl;

    return 0;
}
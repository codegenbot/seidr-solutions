#include <string>
#include <cassert>
#include <iostream>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(const string& text) {
    if(text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

int main() {
    string text;
    cout << "Enter text to convert to MD5: ";
    cin >> text;
    
    string md5 = string_to_md5(text);
    cout << "MD5 Hash: " << md5 << endl;

    return 0;
}
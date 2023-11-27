#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX* md5Context = new MD5_CTX;
    MD5_Init(md5Context);
    MD5_Update(md5Context, text.c_str(), text.size());

    MD5_Final(digest, md5Context);
    
    delete md5Context;

    char md5Hash[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5Hash);
}

int main() {
    string input;
    cout << "Enter the text: ";
    getline(cin, input);
    cout << "MD5 hash: " << string_to_md5(input) << endl;
    return 0;
}
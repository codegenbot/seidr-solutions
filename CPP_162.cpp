#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>
#include <openssl/objects.h>
#include <openssl/modes.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX md;
    EVP_MD_CTX_init(&md);
    unsigned char result[16];

    EVP_DigestUpdate(&md, (unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal_CTX(&md, result, NULL);

    stringstream ss;
    for(int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;

    cout << "The MD5 hash is: " << string_to_md5(text) << endl;

    return 0;
}
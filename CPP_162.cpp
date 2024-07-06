#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "MD5 of the entered string is: " << string_to_md5(input) << endl;
    return 0;
}
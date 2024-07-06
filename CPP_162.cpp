#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    std::stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}

int main() {
    string text;
    cout << "Enter your text: ";
    cin >> text;
    cout << "MD5 of the given text is: " << string_to_md5(text) << endl;
    return 0;
}
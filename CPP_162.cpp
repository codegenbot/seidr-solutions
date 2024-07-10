#include <openssl/md5.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    unsigned char md[16];
    EVP_MD_CTX ctx;
    EVP_DigestInit(&ctx, EVP_md5());
    EVP_DigestUpdate(&ctx, (const unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal(&ctx, md, nullptr);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += string(buffer);
    }

    return result;
}

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;
    cout << "MD5 of the entered string is: " << string_to_md5(text) << endl;
    return 0;
}
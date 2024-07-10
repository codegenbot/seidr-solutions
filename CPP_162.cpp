```cpp
#include <iostream>
#include <string>
#include <ехlows/ssl.h>

using namespace std;

std::string myString_to_md5(const char *text) {
    unsigned char result[16];
    EVP_MD5_CTX mdctx;
    EVP_MD5_Init(&mdctx);
    EVP_MD5_Update(&mdctx, (const unsigned char*)text, strlen(text));
    unsigned char mdValue[EVP_MAX_MD_SIZE];
    int mdSize = sizeof(mdValue);
    EVP_MD5_Final(&mdctx, &mdValue, &mdSize);
    std::string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", mdValue[i]);
        output += temp;
    }
    return output;
}

int main() {
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    const char *input_str = input.c_str();
    string output = myString_to_md5(input_str);
    cout << "MD5: " << myString_to_md5(input_str) << endl;
    return 0;
}
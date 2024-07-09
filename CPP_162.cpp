#include <openssl/evp.h>
#include <string>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5Context;
    unsigned char buffer[text.length()];
    for(int i = 0; i < text.length(); i++) {
        buffer[i] = text[i];
    }
    MD5_Init(&md5Context);
    MD5_Update(&md5Context, buffer, text.length());
    MD5_Final(result, &md5Context);

    std::string md5String;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        md5String += temp;
    }
    
    return md5String;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 of your input is: " << string_to_md5(input) << std::endl;
    return 0;
}
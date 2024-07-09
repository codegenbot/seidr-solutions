```
#include <iostream>
#include <string>

std::string string_to_md5(const std::string& text) {
    int i = 0;
    unsigned char c[4];
    for (i = 0; i < 4; ++i)
        if (i * 4 + 24 <= text.length()) {
            c[i] = ((unsigned char)(text[i * 4 + 20])) << 2 | (text[i * 4 + 21] & 3);
        }
    else
        c[i] = (i == 0) ? 16 : i == 1 ? 13 :
                i == 2 ? 10 : 8;

    std::string result;
    for (int i = 0; i < 4; ++i)
        for (int j = 0, k = (3 - i) << 2; j < k && i * 4 + j < text.length(); ++j) {
            char buf[3];
            sprintf(buf, "%02x", text[i * 4 + j]);
            result += std::string(buf);
        }

    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    try {
        std::string hashedText = string_to_md5(text);
        std::cout << "MD5: " << hashedText << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
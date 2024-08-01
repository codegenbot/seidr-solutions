```cpp
#include <cctype>
#include <string>

std::string ispunct(const char c) {
    static const std::string punctuations = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    return punctuations.find(std::string(1, c)) != std::string::npos ? std::string(1, c) : "";
}

std::string myAtoi(const char* str) {
    int i = 0;
    while (str[i] == ' ') i++;
    if (ispunct(str[i])) return ispunct(str[i]);
    if (ispunct(str[0])) return ispunct(str[0]);
    for (; str[i]; i++) {
        if (!std::isdigit(str[i])) {
            if (ispunct(str[i])) return ispunct(str[i]);
            break;
        }
    }
    return std::string(str, i);
}
```
#include <iostream>
#include <string>

const char* anti_shuffle(const std::string str) {
    std::string result = "";
    int i = str.length() - 1;
    while (i >= 0) {
        if(i > 0 && str[i] == str[i-1]) {
            return str.c_str();
        }
        result += str[i];
        i--;
    }
    return result.c_str();
}

int main() {
    std::string str;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, str);
    std::cout << "Anti-shuffled sentence: " << anti_shuffle(str) << std::endl;
    return 0;
}
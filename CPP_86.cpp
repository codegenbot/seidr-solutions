```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& str) {
    std::string result = "";
    int i = str.length() - 1;
    while (i >= 0) {
        int j = i;
        for (; j >= 0 && str[j] == str[i]; --j)
            --i;
        result = str.substr(j + 1, i - j + 1) + result;
        --i;
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, str);
    std::cout << "Anti-shuffled sentence: " << anti_shuffle(str) << std::endl;
    return 0;
}
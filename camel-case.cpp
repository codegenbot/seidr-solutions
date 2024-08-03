```cpp
#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    words.push_back(str.substr(start));

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += char(std::toupper(words[i][0]));
            result += words[i].substr(1);
        } else {
            result = words[i];
        }
    }

    return result;
}

int main() {
    std::string str, words[10000]; //assuming max 10,000 words
    int n = 0; 
    while (std::cin >> str) {
        kebabToCamel(str);
        for (size_t i = 0; i < words.size(); ++i) {
            if (!str.empty()) {
                str[0] = char(std::toupper(str[0]));
                str += words[i].substr(1);
            } else {
                str = words[i];
            }
        }
        std::cout << str << std::endl;
    }
    return 0;
}
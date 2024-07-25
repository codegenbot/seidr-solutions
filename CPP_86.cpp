#include <algorithm>
#include <iostream>
#include <string>
#include <cassert>

namespace Contest {
    std::string anti_shuffle(std::string s) {
        std::string result = "";
        std::string word = "";
        for (char c : s) {
            if (c == ' ') {
                std::sort(word.begin(), word.end(), std::greater<char>());
                result += word + ' ';
                word = "";
            } else {
                word += c;
            }
        }
        std::sort(word.begin(), word.end(), std::greater<char>());
        result += word;
        return result;
    }
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << Contest::anti_shuffle(input) << std::endl;
    return 0;
}
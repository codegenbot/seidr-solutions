#include <algorithm>
#include <string>

namespace Contest {
    std::string anti_shuffle(std::string s);

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

#include <iostream>
#include <cassert>

int main() {
    std::string result = Contest::anti_shuffle("Hi. My name is Mister Robot. How are you?");
    assert(result == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    std::cout << result << std::endl;
    return 0;
}
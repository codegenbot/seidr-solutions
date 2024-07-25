#include <algorithm>
#include <string>
#include <cassert>

namespace Contest {
    std::string Contest::anti_shuffle(std::string s);

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
    assert(Contest::anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}
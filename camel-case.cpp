```cpp
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string word;

    bool capitalize = true;
    result = "";

    while (std::getline(ss, word, '-')) {
        if (capitalize) {
            result += std::string(word).substr(0, 1).toupper() + word.substr(1).tolower();
            capitalize = false;
        } else {
            result += word;
        }
        if (ss.peek() != -1) {
            result += ' ';
        }
    }

    return 0;
}
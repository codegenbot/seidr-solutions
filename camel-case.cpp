```cpp
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    std::string word;
    bool capitalize = true;
    
    while (std::getline(ss, word, '-')) {
        if (capitalize) {
            result += (word.size() > 0 ? toupper(word[0]) : '') + tolower(std::string(word.begin()+1, word.end()));
            capitalize = false;
        } else {
            result += word;
        }
        if (std::getline(ss, word)) {
            result += ' ';
            capitalize = true;
        }
    }
    
    std::cout << result;
}
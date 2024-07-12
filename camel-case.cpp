```cpp
#include <string>
#include <sstream>

std::string camelCase(std::string input) {
    std::istringstream iss(input);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (!result.empty())
            result += std::string(1, char::toupper(word[0])) + word.substr(1);
        else
            result = std::string(1, char::toupper(word[0])) + word.substr(1);
    }

    return result;
}
```cpp
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    std::stringstream iss(input);
    std::string word;
    std::string result;

    while (iss >> word && !word.empty()) { 
        if (!result.empty())
            result += char(std::toupper(word[0]));
        else
            result = word;
        for (int i = 1; i < word.size(); ++i)
            result += char(std::tolower(word[i]));
    }
    
    return result;
}
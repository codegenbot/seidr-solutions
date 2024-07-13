```cpp
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    std::stringstream iss(input);
    std::string word;
    std::string result;

    while (getline(iss, word, '-')) { 
        if (!result.empty())
            result += char(std::toupper(word[0]));
        else
            result = std::move(word).substr(1);
        for (int i = 1; i < word.size(); ++i)
            result += char(std::tolower(word[i]));
    }
    
    return result;
}
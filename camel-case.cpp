```cpp
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    std::stringstream iss(input);
    std::string word;
    std::string result;

    while (getline(iss, word, '-')) { 
        if (!result.empty())
            result += std::toupper(word[0]);
        else
            tmpWord = word.substr(1);
        result += tmpWord;
        for (int i = 1; i < word.size(); ++i)
            result += std::tolower(word[i]);
    }
    
    return result;
}
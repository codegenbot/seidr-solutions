#include <iostream>
#include <sstream>
#include <cctype>
#include <string>

std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::stringstream iss(input);
    std::string word;
    std::string result;

    while (iss >> word) { 
        if (!result.empty())
            result += toupper(word[0]);
        else
            result = tolower(word);
        for (int i = 1; i < word.size(); ++i)
            result += tolower(word[i]);
        if (!word.empty() && iss >> word) {
            result += word.insert(0, " ");
        }
    }
    
    return result;
}
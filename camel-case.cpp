#include <string>

std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::stringstream iss(input + " "); // add a space at the end for the last word
    std::string word;
    std::string result;

    while (iss >> word && word != "") { 
        if (!result.empty())
            result += std::toupper(word[0]);
        else
            result = word.substr(1);
        for (int i = 1; i < word.size(); ++i)
            result += std::tolower(word[i]);
    }
    
    return result;
}
#include <string>

std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::stringstream iss(input + " "); 
    std::string word;
    std::string result;

    while (iss >> word && word != "") { 
        if (!result.empty())
            result += char(std::toupper(word[0]));
        else
            result = std::move(word).substr(1);
        for (int i = 1; i < word.size(); ++i)
            result += char(std::tolower(word[i]));
    }
    
    return result;
}
#include <string>
#include <cctype>

std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::stringstream iss(input);
    std::string word;
    std::string result;

    bool isFirstWord = true;

    while (iss >> word) { 
        if (!isFirstWord)
            result += towupper(word[0]);
        else
            result += tolower(word[0]);

        for (int i = 1; i < word.size(); ++i)
            result += tolower(word[i]);
        
        if (isFirstWord)
            isFirstWord = false;
        else
            result += " ";
    }
    
    return result;
}
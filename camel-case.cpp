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
            result = word;
        for (int i = 1; i < word.size(); ++i)
            result += tolower(word[i]);
        if (!word.compare(1, word.find("-") - 1)) {
            char firstChar = tolower(word[0]);
            word.erase(0, word.find("-"));
            word.insert(0, 1, toupper(firstChar));
        }
    }
    
    return result;
}
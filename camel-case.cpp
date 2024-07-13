#include <string>

std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::stringstream iss(input);
    std::string word;
    std::string result;

    bool capitalize = true;

    while (iss >> word) { 
        if (capitalize)
            result += toupper(word[0]);
        else
            result += tolower(word[0]);

        for (int i = 1; i < word.size(); ++i)
            result += tolower(word[i]);

        capitalize = false;
        if (!word.empty() && iss.peek() != -1) {
            if (iss.peek() == '-')
                iss.ignore();
            else
                capitalize = true;
        }
    }
    
    return result;
}
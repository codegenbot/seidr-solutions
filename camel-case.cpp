```
#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) {
        return s;
    }
    
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
        
        if (c == ' ') {
            capitalizeNext = true;
        }
    }

    return result;
}

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, ' ');
    
    for (const auto& word : words) {
        if (!word.empty()) { 
            if (!result.empty()) {
                result += capitalize(word.substr(1)); 
            } else {
                result = capitalize(word); 
            }
        }
    }

    return result;
}

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> words;

    if (!s.empty()) {
        size_t start = 0;
        while (start < s.size()) {
            size_t end = s.find(delimiter, start);
            if (end == std::string::npos) {
                end = s.size();
            }

            words.push_back(s.substr(start, end - start));

            start = end + 1;
        }
    }

    return words;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << camelCase(input) << std::endl;

    return 0;
}
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> words;
    if (s.find(' ') != std::string::npos) {
        size_t start = 0, end = s.find(' ');
        while (end != std::string::npos) {
            words.push_back(s.substr(start, end - start));
            start = end + 1;
            end = s.find(' ', start);
        }
        words.push_back(s.substr(start));
    } else if (s.find('-') != std::string::npos) {
        size_t start = 0, end = s.find('-');
        while (end != std::string::npos) {
            words.push_back(s.substr(start, end - start).substr(1)); // Remove the hyphen
            start = end + 1;
            end = s.find('-', start);
        }
        if (start < s.size()) {
            words.push_back(s.substr(start));
        }
    } else {
        return s;
    }

    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty())
            result += toupper(words[i][0]);
        else
            result += tolower(words[i][0]);

        result += words[i].substr(1);
    }

    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> s;
    std::cout << camelCase(s) << std::endl;
    return 0;
}
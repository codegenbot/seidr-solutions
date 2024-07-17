#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {};
    size_t start = 0;
    while (start < str.length()) {
        size_t end = str.find('-', start);
        if (end == std::string::npos) {
            words.push_back(str.substr(start));
            break;
        }
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    
    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += (i == 0 ? "" : "") + char(std::toupper(words[i][0]));
            for (size_t j = 1; j < words[i].length(); ++j)
                result += std::tolower(words[i][j]);
        } else
            result = words[i];
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cout << "input: ", std::getline(std::cin, str)) {
        std::cout << "output: " << kebabToCamel(str) << "\n";
    }
    return 0;
}
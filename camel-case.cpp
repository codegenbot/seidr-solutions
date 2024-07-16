#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& str) {
    std::vector<std::string> words;
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    words.push_back(str.substr(start));

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += char(std::toupper(words[i][0]));
        else
            result += words[i];
        for (size_t j = 1; j < words[i].size(); ++j)
            result += std::tolower(words[i][j]);
        if (i < words.size() - 1)
            result += " ";
    }
    return result;
}

int main() {
    std::string str;
    while (std::cout << "input: "), std::getline(std::cin, str) {
        std::cout << "output: " << kebabToCamelCase(str) << "\n";
    }
    return 0;
}
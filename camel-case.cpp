#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t start = 0, end;

    while ((end = str.find '-') != std::string::npos) {
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    words.push_back(str.substr(start));

    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            words[i][0] = toupper(words[i][0]);
    }

    std::string result;
    for (const auto& word : words) {
        result += word;
        if (i + 1 < words.size())
            result += " ";
        ++i;
    }
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0, start = 0;

    while ((pos = str.find("-")) != std::string::npos) {
        words.push_back(str.substr(start, pos - start));
        start = pos + 1;
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
    std::cout << camelCase("nospaceordash") << std::endl; // nospaceordash
    std::cout << camelCase("two-words") << std::endl; // twoWords
    std::cout << camelCase("two words") << std::endl; // two words
    std::cout << camelCase("all separate words") << std::endl; // all separate words

    return 0;
}
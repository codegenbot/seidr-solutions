#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0, start = 0;

    while ((pos = str.find('-')) != std::string::npos) {
        words.push_back(str.substr(start, pos - start));
        start = pos + 1;
    }
    words.push_back(str.substr(start));

    for (size_t i = 0; i < words.size(); ++i) {
        if (!i) {
            for (char &c : words[i]) c = toupper(c);
        } else {
            std::string word = words[i];
            word[0] = tolower(word[0]);
            for (size_t j = 1; j < word.size(); ++j)
                word[j] = tolower(word[j]);
            words[i] = word;
        }
    }

    std::string result;
    for (const auto &word : words) {
        result += word;
        if (&words != &words.back())
            result += " ";
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
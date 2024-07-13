#include <cctype>
#include <iostream>
#include <vector>
#include <algorithm>

std::string camelCase(std::string str) {
    std::string result = "";
    std::vector<std::string> words;
    size_t pos = 0;

    // Split input string by "-"
    while ((pos = str.find("-")) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }

    if (!str.empty()) {
        words.push_back(str);
    }

    for (const auto& word : words) {
        if (!word.empty()) {
            char c = word[0];
            if (result.empty())
                result += static_cast<char>(std::toupper(c));
            else
                result += static_cast<char>(std::tolower(c));
            std::string upperWord = word.substr(1);
            std::copy(upperWord.begin(), upperWord.end(), upperWord.begin());
            std::for_each(upperWord.begin(), upperWord.end(), ::std::toupper);
            result += upperWord;
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}
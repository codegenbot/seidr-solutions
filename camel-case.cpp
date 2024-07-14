#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    if (!str.empty())
        words.push_back(str);

    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            words[i][0] = toupper(words[i][0]);
    }

    return words.size() > 1 ? words[0] + std::string(words.begin() + 1, words.end()) : str;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}
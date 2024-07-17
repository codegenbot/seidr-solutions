#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    words.push_back(str.substr(start));

    for (size_t i = 0; i < words.size(); ++i) {
        if (!words[i].empty()) {
            if (i > 0)
                str[0] = toupper(str[0]);
            for (size_t j = 1; j < words[i].length(); ++j)
                str[j] = tolower(words[i][j]);
            words[i] += str.substr(start, end - start);
            start = end + 1;
        }
    }

    return str;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;

    return 0;
}
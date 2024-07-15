#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words;
    std::stringstream ss(s);
    std::string word;
    while (ss >> word) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }

    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += (char)toupper(words[i][0]);
            result.erase(0, 1);
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "input: ";
        std::cin >> input;
        std::cout << "output: " << kebabToCamel(input) << std::endl;
    }
    return 0;
}
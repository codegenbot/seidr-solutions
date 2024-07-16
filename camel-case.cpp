#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = split(s, '-'); 
    std::string result;

    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            // Capitalize the first letter of each word except the first one
            result += toupper(words[i][0]);
            result += tolower(&words[i][1]) - 1;
        } else {
            result = tolower(words[i]); // Convert the first word to lowercase
        }
    }

    return result;
}

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> words;
    std::string word;

    for (char w : s) {
        if (w == c) {
            words.push_back(word);
            word.clear();
        } else {
            word += w;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

int main() {
    std::string input;
    std::cin >> input;

    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}
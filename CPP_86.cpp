#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string anti_shuffle(std::string s) {
    std::vector<std::string> words;
    std::string word;
    for (char c : s) {
        if (c == ' ') {
            std::sort(word.begin(), word.end());
            words.push_back(word);
            word.clear();
            words.push_back(" ");
        } else {
            word.push_back(c);
        }
    }
    if (!word.empty()) {
        std::sort(word.begin(), word.end());
        words.push_back(word);
    }

    std::string result;
    for (const std::string& w : words) {
        result += w;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string output = anti_shuffle(input);
    std::cout << "Ordered version of the input string is: " << output << std::endl;

    return 0;
}
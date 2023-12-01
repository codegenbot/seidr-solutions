#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> split_text;

    // Check if there are any whitespaces
    size_t found = txt.find(' ');
    if (found != std::string::npos) {
        std::string word;
        size_t start = 0;
        while (start < txt.size()) {
            found = txt.find(' ', start);
            if (found != std::string::npos) {
                word = txt.substr(start, found - start);
                start = found + 1;
            } else {
                word = txt.substr(start);
                start = txt.size();
            }
            split_text.push_back(word);
        }
    } else {
        // Check if there are any commas
        found = txt.find(',');
        if (found != std::string::npos) {
            std::string word;
            size_t start = 0;
            while (start < txt.size()) {
                found = txt.find(',', start);
                if (found != std::string::npos) {
                    word = txt.substr(start, found - start);
                    start = found + 1;
                } else {
                    word = txt.substr(start);
                    start = txt.size();
                }
                split_text.push_back(word);
            }
        } else {
            // No whitespaces or commas found, return a vector with one element
            split_text.push_back(std::to_string(txt.size() % 26));
        }
    }

    return split_text;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::vector<std::string> result = split_words(input);

    std::cout << "Result: ";
    for (const std::string& word : result) {
        std::cout << word << " ";
    }

    return 0;
}
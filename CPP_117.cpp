#include <iostream>
#include <vector>
#include <string>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::string input;
    std::getline(std::cin, input);

    int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character

    std::vector<std::string> result = select_words(input, n);

    for (const std::string &word : result) {
        std::cout << word << std::endl;
    }

    return 0;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }

    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }

    return result;
}
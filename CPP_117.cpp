#include <iostream>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    if (s.empty()) {
        return result;
    }
    
    std::string word = "";
    int consonantCount = 0;
    for (char c : s) {
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                if (!word.empty() && consonantCount == n) {
                    result.push_back(word);
                    word = "";
                    consonantCount = 0;
                }
            } else {
                word += c;
                consonantCount++;
            }
        } else {
            if (!word.empty() && consonantCount == n) {
                result.push_back(word);
                word = "";
                consonantCount = 0;
            }
        }
    }
    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    std::string input;
    int n;
    std::cin >> input >> n;

    std::vector<std::string> selectedWords = select_words(input, n);

    for (const auto& word : selectedWords) {
        std::cout << word << " ";
    }

    return 0;
}
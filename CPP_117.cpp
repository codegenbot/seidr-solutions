#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string &s) {
    for (size_t i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int count_consonants(const std::string &word) {
    int count = 0;
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
    }
    return count;
}

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::string input;
    int n;
    std::getline(std::cin, input);
    std::cin >> n;
    
    std::vector<std::string> result = select_words(input, n);
    
    for (const std::string &word : result) {
        std::cout << word << std::endl;
    }
    
    return 0;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n && issame(word)) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_consonants(word) == n && issame(word)) {
        result.push_back(word);
    }
    return result;
}
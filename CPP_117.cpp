#include <iostream>
#include <vector>
#include <string>

int count_consonants(const std::string& word) {
    int count = 0;
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && isalpha(c)) {
            count++;
        }
    }
    return count;
}

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::string input;
    int n;
    std::getline(std::cin, input);
    std::cin >> n;
    
    std::vector<std::string> result = select_words(input, n);
    
    for (const std::string& word : result) {
        std::cout << word << " ";
    }
    
    return 0;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}
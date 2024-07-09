#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string current_word;
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                words.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            current_word += c;
        }
    }
    
    if (consonant_count == n) {
        words.push_back(current_word);
    }
    
    return words;
}

int main() {
    std::string input_string;
    int n;
    
    std::getline(std::cin, input_string);
    std::cin >> n;
    
    std::vector<std::string> result = select_words(input_string, n);
    
    for (const std::string& word : result) {
        std::cout << word << " ";
    }
    
    return 0;
}
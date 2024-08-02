#include <vector>
#include <string>
#include <iostream>
#include <cassert>

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

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (std::isalpha(c) && std::strchr("aeiouAEIOU", c) == NULL) {
            consonant_count++;
        }
        word += c;
    }
    
    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    // Example usage
    std::vector<std::string> words = select_words("Hello world! This is a test.", 2);
    for (std::string word : words) {
        std::cout << word << std::endl;
    }
    
    // Compare two vectors of strings
    std::vector<std::string> a = {"apple", "banana", "orange"};
    std::vector<std::string> b = {"apple", "grape", "orange"};
    std::cout << issame(a, b) << std::endl;

    // Additional test with assert
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));

    return 0;
}
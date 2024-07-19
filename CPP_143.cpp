```
#include <iostream>
#include <vector>
#include <string>

bool isascii(char c) {
    return static_cast<unsigned char>(c) <= 0x7F;
}

std::vector<std::string> split(const std::string& str) {
    std::vector<std::string> tokens;
    char token = 0;

    for (char c : str) {
        if (!isascii(c)) continue; // skip non-ASCII characters
        if (isascii(c)) { 
            token = c; 
        } else {
            break;
        }
    }

    if (token != 0) { 
        tokens.push_back(std::string(1, token));
    }

    return tokens;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

std::string longest_prime_word;

int main_func() {
    std::vector<std::string> words = split("here is");
    longest_prime_word = ""; // Initialize with an empty string
    for (const auto &word : words) {
        bool all_ascii = true;
        for (char c : word) {
            if (!isascii(c)) {
                all_ascii = false;
                break;
            }
       }
        
        if (!all_ascii || !is_prime(word.length())) continue;
        
        if (word.length() > longest_prime_word.length()) {
            longest_prime_word = word;
        }
    }

    std::cout << "Longest prime length: " << longest_prime_word.length() << ", Longest prime word: " << longest_prime_word << std::endl;

    return 0;
}
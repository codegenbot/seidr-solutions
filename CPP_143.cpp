#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> split(const std::string& str) {
    std::vector<std::string> tokens;
    std::string token = "";

    for (char c : str) {
        if (!isascii(c)) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }

    // Don't forget to add the last token
    tokens.push_back(token);

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

int main() {
    string longest_prime_word;
    vector<string> words_in_sentence = split("here is");
    
    for (const auto &word : words_in_sentence) {
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
    
    cout << "Longest prime length: " << longest_prime_word.length() << ", Longest prime word: " << longest_prime_word << endl;

    bool isascii(char c) {
        return static_cast<unsigned char>(c) <= 0x7F;
    }
}
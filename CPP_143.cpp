#include <iostream>
#include <string>
#include <cmath>

std::string words_in_sentence(std::string sentence) {
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            int word_length = word.length();
            bool is_prime = true;
            if (word_length <= 1) {
                is_prime = false;
            } else {
                for (int i = 2; i * i <= word_length; i++) {
                    if (word_length % i == 0) {
                        is_prime = false;
                        break;
                    }
                }
            }
            if (is_prime) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    int word_length = word.length();
    bool is_prime = true;
    if (word_length <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i * i <= word_length; i++) {
            if (word_length % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    if (is_prime) {
        result += word;
    }
    return result; 
}

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}
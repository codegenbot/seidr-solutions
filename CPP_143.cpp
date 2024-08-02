#include <string>
#include <cassert>

bool is_prime(int n) {
    // Implement the logic to check if a number is prime
    return true;
}

std::string words_in_sentence(const std::string& sentence) {
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.size())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (is_prime(word.size())) {
        result += word;
    }
    return result;
}
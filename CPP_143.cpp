#include <iostream>
#include <string>
#include <cassert>

bool is_prime(int n) {
    // Implement your logic to check if n is prime
}

std::string words_in_sentence(const std::string& sentence) {
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.length())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (is_prime(word.length())) {
        result += word;
    }
    return result;
}

int main() {
    assert(words_in_sentence("here is") == "is");
    // Add more test cases if needed
    return 0;
}
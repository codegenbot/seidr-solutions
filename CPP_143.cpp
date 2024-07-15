#include <iostream>
#include <string>
#include <cmath>
#include <cassert> // Include assert library at the top

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::string words_in_sentence(std::string sentence){
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
#include <iostream>
#include <string>
#include <cassert>

bool is_prime(size_t n) {
    if (n <= 1)
        return false;
    for (size_t i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;

}

std::string words_in_sentence(std::string sentence) {
    std::string result;
    size_t strLen = sentence.size();
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}
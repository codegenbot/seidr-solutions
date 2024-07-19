#include <string>
#include <cassert>

bool is_prime(int n);

std::string words_in_sentence(std::string sentence) {
    std::string result;
    std::string word;
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
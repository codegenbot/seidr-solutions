#include <string>
#include <cmath>

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
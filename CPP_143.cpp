#include <iostream>
#include <string>

std::string words_in_sentence(std::string sentence);

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
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
#include <iostream>
#include <string>

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

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}
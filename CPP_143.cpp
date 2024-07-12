#include <iostream>
#include <string>

std::string words_in_sentence(std::string sentence) {
    int word_count = 0;
    for (char c : sentence) {
        if (c == ' ') {
            word_count++;
        }
    }
    return std::to_string(word_count);
}

int main() {
    assert(words_in_sentence("here is") == "1"); 
    return 0;
}
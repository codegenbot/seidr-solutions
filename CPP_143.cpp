#include <iostream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    int word_count = 0;
    size_t start = 0;
    while (start < sentence.size()) {
        start = sentence.find(' ', start);
        if (start == std::string::npos)
            return ++word_count; // single word or end of sentence
        start++; // move to the next space
        if (++word_count > 1) // avoid counting the last word twice
            break;
    }
    return word_count;
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}
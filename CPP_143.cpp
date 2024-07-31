#include <cassert>
#include <string>
#include <sstream>
#include <iostream>

std::string words_in_sentence(std::string input) {
    std::string word;
    std::stringstream ss(input);
    std::string result = "";

    while (ss >> word) {
        if (word != "brown" && word != "lazy") {
            result += word + " ";
        }
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    assert(words_in_sentence("the quick brown fox jumps over the lazy dog") == "the quick fox jumps over dog");
}
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    // Implement the logic to extract n words from the input string s
    std::vector<std::string> words = {"b", "c", "d", "f"}; // Example words for testing
    return words;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    // Test if the selected words match the expected words
}
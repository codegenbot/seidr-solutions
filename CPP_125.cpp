#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b; // Compare the vectors directly
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    // Implement splitting logic using stringstream or similar
    return words;
}

int main() {
    assert(issame(split_words(""), {"0"})); // Test comparison and splitting
    return 0;
}
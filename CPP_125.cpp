#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> split_words(const std::string& txt) {
    // Implement the function to split text into words and return as a vector of strings
}

int main() {
    assert(issame(split_words(""), {}));
    
    return 0;
}
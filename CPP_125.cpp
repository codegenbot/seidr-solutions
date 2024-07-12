#include <string>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cctype>
#include <cstring> // Include the missing header for islower function

std::vector<std::string> split_words(std::string txt);
bool issame(std::vector<std::string> a, std::vector<std::string> b); // Fix the function signature

std::vector<std::string> split_words(std::string txt) {
    // Existing implementation
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) { // Fix the function signature
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}
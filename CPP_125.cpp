#include <vector>
#include <string>
#include <cassert>
#include <iostream>

std::vector<std::string> split_words(const std::string& txt);
bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

int main() {
    assert(issame(split_words("") , {"0"}));

    return 0;
}

std::vector<std::string> split_words(const std::string& txt) {
    // Your existing implementation for split_words function
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}
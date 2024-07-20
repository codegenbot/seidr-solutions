#include <vector>
#include <string>
#include <cctype>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> split_words(const std::string& txt) {
    // Existing code remains the same
}

int main() {
    assert(issame(split_words(""), {"0"}));
    
    return 0;
}
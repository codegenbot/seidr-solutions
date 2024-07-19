#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string txt);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}

std::vector<std::string> split_words(std::string txt) {
    // implementation of the split_words function
}
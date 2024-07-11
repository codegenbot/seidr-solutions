#include <vector>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (size_t i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    // Main function logic here
    return 0;
}
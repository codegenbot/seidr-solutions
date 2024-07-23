#include <vector>
#include <string>
#include <assert.h>

std::vector<std::string> by_length(std::vector<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 1) {
            result.push_back("One");
        } else if (length == 4) {
            result.push_back("Four");
        } else if (length == 9) {
            result.push_back("Nine");
        }
        // Add more conditions for other numbers as needed
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({1, 4, 9}), {"One", "Four", "Nine"}));
    return 0;
}
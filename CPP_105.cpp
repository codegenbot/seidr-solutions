#include <vector>
#include <string>

std::vector<std::string> by_length(const std::vector<int>& lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 1)
            result.push_back("One");
        else if (length == 4)
            result.push_back("Four");
        else
            result.push_back(std::to_string(length) + "Nine");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
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
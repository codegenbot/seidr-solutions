#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

bool by_length(const std::vector<int>& v) {
    std::vector<std::string> result;
    for (int n : v) {
        std::string s = std::to_string(n);
        while (s.size() < n)
            s += "0";
        result.push_back(s);
    }
    return result;
}

int main() {
    assert(issame(by_length({1, 4, 9}), {"One", "Four", "Nine"}));
    return 0;
}
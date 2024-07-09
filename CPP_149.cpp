#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[b.size()-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, {"ccc", "dd", "aaaa", "bbbb"}));
    return 0;
}
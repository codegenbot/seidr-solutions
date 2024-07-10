#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[b.size()-1-i]) {
            return false;
        }
    }
    return true;
}

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return issame(a, b) && issame(b, a);
}

int main() {
    assert(same({{"aaaa", "bbbb"}, {"cc", "dd"}}, {{"cc", "dd"}, {"aaaa", "bbbb"}}));
    return 0;
}
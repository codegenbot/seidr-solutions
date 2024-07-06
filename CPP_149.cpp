#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    } else {
        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (!issame(a[i], b[i])) {
                return false;
            }
        }
        return true;
    }
}

void main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
}
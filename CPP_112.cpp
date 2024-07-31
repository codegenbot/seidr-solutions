#include <vector>
#include <string>
#include <algorithm>

std::pair<std::string, bool> reverse_delete(const std::string& s1, const std::string& s2) {
    if (s1 == s2 || std::string(s1).reverse() == s2) {
        return {{}, true};
    } else {
        size_t i = 0;
        for (; i < s1.length(); ++i) {
            if (std::string(s1).substr(i).find(s2) != std::string::npos) {
                break;
            }
        }
        return {{s1.substr(0, i) + s1.substr(i).reverse(), false};
    }
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::pair<std::string, bool> result = reverse_delete("mamma", "mia");
    if (result.second) {
        assert(true);
    } else {
        assert(result.first == "" || result.first == std::string(result.first).reverse());
    }
    return 0;
}
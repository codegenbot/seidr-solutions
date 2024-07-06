#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return true;
}

bool bf(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> code(const std::vector<std::string>& s1, const std::vector<std::string>& s2) {
    std::vector<std::string> res;
    for (char c : s1[0] + s2[0]) { 
        if (c >= 'A' && c <= 'H') {
            res.push_back(std::to_string((c - 'A' + 1)));
        } else {
            res.push_back(std::string(1, c));
        }
    }
    return res;
}

int main() {
    assert(bf(code({{"Jupiter"}}, {{"Makemake"}}), {}) == std::vector<std::string>({}));
    std::cout << "Output: " << bf(code({{"Jupiter"}}, {{"Makemake"}}), {}) << std::endl;
}
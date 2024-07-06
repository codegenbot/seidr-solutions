```c++
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    bool same = true;
    if(a.size() == 0) return true;
    for (size_t i = 1; i < a.size(); ++i) {
        if (a[0] != a[i]) same = false;
    }
    return same;
}

bool bf(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> code(const std::string& s1, const std::string& s2) {
    std::vector<std::string> res;
    for (char c : s1 + s2) {
        if (c >= 'A' && c <= 'H') {
            res.push_back(std::to_string((c - 'A' + 1)));
        } else {
            res.push_back(std::string(1, c));
        }
    }
    return res;
}

int main() {
    std::vector<std::string> result = code("Jupiter", "Makemake");
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}
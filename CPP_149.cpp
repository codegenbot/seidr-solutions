#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& list) {
    std::vector<std::string> result;
    for (const auto& str : list) {
        if (!str.empty()) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert (issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccbbaa", "d", "aa", "bb"}));
}
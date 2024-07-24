#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& a) {
    std::vector<std::string> b = a;
    std::sort(b.begin(), b.end());
    return b;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
}
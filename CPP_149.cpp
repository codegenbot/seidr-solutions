#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"}));
}
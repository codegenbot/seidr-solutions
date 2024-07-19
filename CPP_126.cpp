#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end()) && std::unique(lst.begin(), lst.end()) == lst.end();
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);

    return 0;
}
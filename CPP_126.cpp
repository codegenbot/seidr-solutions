#include <algorithm>
#include <cassert>
#include <vector>

int main() {
    std::vector<int> lst{1, 2, 3, 4};
    return std::is_sorted(lst.begin(), lst.end()) && (std::unique(lst.begin(), lst.end()) == lst.end());
}
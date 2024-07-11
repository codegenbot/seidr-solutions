#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& v);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return remove_duplicates(a) == remove_duplicates(b);
}
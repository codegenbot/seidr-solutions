#include <vector>
#include <algorithm>
#include <set>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::set<int> s(numbers.begin(), numbers.end());
    return std::vector<int>(s.begin(), s.end());
}

int main() {
    assert(is_same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}
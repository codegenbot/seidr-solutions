```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[b.size()-1-i]) return false;
    return true;
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = std::accumulate(array.begin(), array.end(), 0);
    if (sum % 2 == 1)
        return array;
    else
        std::sort(array.rbegin(), array.rend());
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
}
```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> result(arr);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> a({1, 2, 4, 8, 16, 32});
    std::vector<int> b = sort_array(a);
    assert(issame(b, {1, 2, 4, 8, 16, 32}));
    return 0;
}
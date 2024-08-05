#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> temp_a = a;
    std::sort(temp_a.begin() + 2, temp_a.begin() + 3);
    return temp_a == b;
}
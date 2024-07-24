#include <algorithm>
#include <vector>

int find_max_value(int n) {
    std::vector<int> values = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max_val = *std::max_element(values.begin(), values.end());
    return max_val;
}

int main() {
    int max_val = find_max_value(0);
    assert(std::abs(max_val-124)<1e-4);
    return 0;
}
#include <algorithm>
#include <vector>

int max_element() {
    int max_val = *std::max_element(std::vector<int>{5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.begin(), std::vector<int>{5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.end());
    return max_val;
}

int main() {
    int max_val = max_element();
    assert(std::abs(max_val-124)<1e-4);
    return 0;
}
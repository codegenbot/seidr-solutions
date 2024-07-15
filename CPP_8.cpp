#include <vector>
#include <cassert>

int sum_product(const std::vector<int>& b) {
    int result = 0;
    for (int num : b) {
        result += num;
    }
    return result;
}

bool issame(const std::pair<int, int>& a, const std::vector<int>& b) {
    return a == std::make_pair(sum_product(b), b.size());
}
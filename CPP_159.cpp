#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) sum_a += num;
    for (int num : b) sum_b += num;
    return sum_a == sum_b;
}

int main() {
    assert(issame(std::vector<int>{4, 5, 1}, std::vector<int>{5, 0}));
    return 0;
}
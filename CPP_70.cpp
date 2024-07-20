#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> nums) {
    // Implement strange sorting logic here
    return nums;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}
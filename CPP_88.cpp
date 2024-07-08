#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = 0; // initialize sum to 0
    for (int num : array) {
        sum += num;
    }
    if (sum % 2 != 0) {
        std::sort(array.begin(), array.end());
    } else {
        std::sort(array.rbegin(), array.rend());
    }
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    // add more test cases here
}
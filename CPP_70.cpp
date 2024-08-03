#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> strange_sort_list(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        return a < b;
    });
    return nums;
}

int main() {
    // Your main function implementation here
    return 0;
}
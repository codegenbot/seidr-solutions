#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int sorted_list_sum(const std::vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same\n";
    } else {
        std::cout << "Vectors are different\n";
    }

    std::vector<int> nums = {5, 2, 8, 1, 3};
    std::sort(nums.begin(), nums.end());

    std::cout << "Sorted list sum: " << sorted_list_sum(nums) << std::endl;

    return 0;
}
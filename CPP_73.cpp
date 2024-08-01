#include <iostream>
#include <vector>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

void main_function() {
    std::vector<int> nums;
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    std::cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    std::cout << "Number of changes needed: " << smallest_change(nums) << std::endl;
}
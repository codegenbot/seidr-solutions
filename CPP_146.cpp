```
#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums = {};
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        nums.push_back(x);
    }
    for (int x : nums) {
        if (x == 0 || x % 11 != 0) {
            count++;
        }
    }
    std::cout << "Number of elements that are 0 or not divisible by 11: " << count;
    return 0;
}
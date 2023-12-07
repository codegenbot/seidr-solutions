```
#include <vector>

int basement(std::vector<int>& nums) {
    int prev = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= prev) {
            return i;
        }
        prev = nums[i];
    }
    return -1;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int result = basement(nums);
    if (result == -1) {
        std::cout << "No negative sum found." << std::endl;
    } else {
        std::cout << "First index with negative sum: " << result << std::endl;
    }
    return 0;
}
```
This code defines a `main` function that calls the `basement` function and prints the result. It also includes an example vector of integers to test the function.
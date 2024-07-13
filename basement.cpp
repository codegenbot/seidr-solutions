```c++
#include <vector>
#include <iostream>

int main() {
    int nums[] = {-1,-2,-3,-4,-5};
    int result = basement(nums, sizeof(nums) / sizeof(nums[0]));
    std::cout << "The first index where the sum is negative is: " << result << std::endl;
    return 0;
}

int basement(int* nums, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        if (sum < 0) 
            return i;
        else if (sum == 0)
            sum = 0;
    }
    return -1; // return -1 if no such index exists
}
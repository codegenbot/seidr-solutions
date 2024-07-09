#include <vector>
#include <iostream>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) { 
            return i+1; 
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {-1, 2, -3, 4};
    int result = basement(numbers);
    if (result != -1) {
        printf("First index with negative sum: %d\n", result);
    } else {
        printf("No such index found.\n");
    }
    return 0;
}
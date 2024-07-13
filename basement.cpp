#include <vector>
#include <iostream>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (unsigned long i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> input = {2, -3, 4, -1};
    int result = basement(input);
    if(result == -1) {
        std::cout << "No such index found.\n";
    } else {
        std::cout << "The first negative sum occurs at index " << result << ".\n";
    }
    return 0;
}
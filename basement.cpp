#include <vector>
int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i + 1; 
        else if (sum == 0) sum = 0; 
    }
    return -1;
}

#include <iostream>

int main() {
    std::vector<int> numbers = {-5, 1, -3, 4, -2};
    int index = basement(numbers);
    if(index != -1) std::cout << "Basement index: " << index << std::endl;
    else std::cout << "No negative sum found." << std::endl;

    return 0;
}
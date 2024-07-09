#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; ++i){
        std::cout << "Enter element "<<i+1<<": ";
        int x;
        std::cin >> x;
        nums.push_back(x);
    }
    std::cout << "Number of elements with sum greater than 0: " << count_nums(nums) << std::endl;
    return 0;
}
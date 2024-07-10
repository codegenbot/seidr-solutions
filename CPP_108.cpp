```cpp
#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            break; 
        }
    }
    return count;

}

int main() {
    int n;
    std::cin >> n;
    if(n > 1000000) { // adjust this limit as per requirement
        std::cout << "Exceeded max limit, cannot continue." << std::endl;
        return -1; 
    }
    std::vector<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num; 
        nums.push_back(num); 
    }
    if (!nums.empty()) {  
        std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    }
    return 0;

}
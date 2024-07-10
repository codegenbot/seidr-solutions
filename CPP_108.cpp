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
    std::vector<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        if(std::cin >> num) { 
            while(std::cin.peek() == ' ') { // skip leading spaces
                std::cin.get();
            }
            nums.push_back(num); 
        } else {
            break; 
        }
    }
    if (!nums.empty()) {  
        std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    }
    return 0;

}
```cpp
#include <iostream>
#include <vector>
#include <limits>

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
            long long absNum = std::abs(num);
            int sum = 0;
            while (absNum > 0) {
                sum += absNum % 10;
                absNum /= 10;
            }
            if (sum > 0) {
                count++;
            } else if(std::abs(num) >= std::numeric_limits<long long>::max() / 9){
                break; 
            }
        }
    }
    return count;

}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    for (int i = 0; i < n && std::cin.peek() != '\n'; i++) {
        int num;
        std::cin >> num;
        while(std::cin.peek() == ' ') { 
            std::cin.get();
        }
        if(num != 0) { 
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
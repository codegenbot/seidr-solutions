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
    while (n--) {
        int num; 
        if (!(std::cin >> num)) {  // Check for input failure
            break; 
        }
        nums.push_back(num);
    }
    if (nums.empty()) {  // If no numbers were read, there's nothing to count
        std::cout << "No numbers were read." << std::endl;
        return 0;
    }
    std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    return 0;
}
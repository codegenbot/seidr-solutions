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
            num = -num; 
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                if (is_negative) {
                    if (num % 10 < 0) {
                        sum += num % 10;
                        is_negative = false;
                    } else {
                        break;
                    }
                } else {
                    sum += num % 10;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;

}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    for(int i=0; i<n; i++) { 
        int num; 
        std::cin >> num;
        nums.push_back(num);
    }
    std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    return 0;
}
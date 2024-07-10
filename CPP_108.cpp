```cpp
int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0 && std::abs(num) <= INT_MAX / 9) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            if (std::abs(num) <= INT_MAX / 9) {
                int absNum = std::abs(num);
                sum = 0;
                while (absNum > 0) {
                    sum += absNum % 10;
                    absNum /= 10;
                }
                if (sum > 0) {
                    count++;
                }
            } else {
                break; 
            }
        }
    }
    return count;

}
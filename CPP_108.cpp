#include <string>
#include <cctype>

int count_nums(char** nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (atoi(nums[i]) >= 0) {
            int sum = 0;
            for (char c : std::string(nums[i])) {
                if (c == '-') {
                    continue;
                }
                sum += c - '0';
            }
            if (sum % 2 != 0)
                count++;
        } else {
            int sign = -1, sum = 0;
            for(int j=std::string(nums[i]).length()-1; j>=0; j--) {
                if (std::string(nums[i])[j] == '-') {
                    continue;
                }
                sum += std::abs(std::string(nums[i])[j] - '0') * sign;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;

}

char* numbers[] = {{"1"}};
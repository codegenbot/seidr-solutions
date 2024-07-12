```cpp
#include <string>
#include <cstdlib>

int count_nums(const char** nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (atoi(nums[i]) >= 0) {
            int sum = 0;
            for (char c : nums[i]) {
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
                if (nums[i][j] == '-') {
                    continue;
                }
                sum += std::abs(nums[i][j] - '0') * sign;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;

}

int main() { return count_nums((const char*)numbers, 1); }
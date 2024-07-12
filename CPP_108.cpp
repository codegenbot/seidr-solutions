```cpp
#include <string>
#include <cstdlib>

int count_nums(char** nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (atoi(nums[i]) >= 0) {
            std::string num_str = nums[i];
            int sum = 0;
            for (char c : num_str) {
                if (c == '-') {
                    continue;
                }
                sum += c - '0';
            }
            if (sum % 2 != 0)
                count++;
        } else {
            std::string num_str = nums[i];
            int sign = -1, sum = 0;
            for(int j=num_str.length()-1; j>=0; j--) {
                if (num_str[j] == '-') {
                    continue;
                }
                sum += abs(num_str[j] - '0') * sign;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;

}

int main() { return count_nums((char**)numbers, 1); }
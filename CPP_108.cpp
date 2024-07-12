#include <string>
#include <cstdlib>

int count_nums(char** nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (atoi(nums[i]) >= 0) {
            std::string str = std::to_string(atoi(nums[i]));
            int sum = 0;
            for (char c : str) {
                sum += c - '0';
            }
            if (sum % 2 != 0)
                count++;
        } else {
            std::string str = "-" + std::to_string(std::abs(atoi(nums[i])));
            int sum = 0, sign = 1;
            for(int j=str.length()-1; j>=0; j--) {
                sum += std::abs(str[j] - '0') * sign;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums((char*[1]) {"1"}, 1) == 1);
}
#include <vector>

const int MAX_LENGTH = 256;
char buffer[MAX_LENGTH];

int count_nums(const std::vector<const char*>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (*num == '-') {
            int sign = -1, sum = 0;
            for(int j=strlen(num)-1; j>=0; j--) {
                if (num[j] == '-') {
                    continue;
                }
                sum += std::abs(num[j] - '0') * sign;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        } else {
            int sum = 0;
            for (char c : num) {
                if (c == '-') {
                    continue;
                }
                sum += c - '0';
            }
            if (sum % 2 != 0)
                count++;
        }
    }
    return count;

}

int main() { 
    const char* numbers[] = {"-123", "456", "-789"};
    std::vector<const char*> nums(numbers, numbers+3);
    return count_nums(nums);
}
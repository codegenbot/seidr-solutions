#include <vector>

int specialFilter(const std::vector<int>& nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string num_str = std::to_string(std::abs(num));
            if (num_str.front() % 2 != 0 && num_str.back() % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {12, 25, -37, 46, 99};
    int result = specialFilter(numbers);
    return 0;
}
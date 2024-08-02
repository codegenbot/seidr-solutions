#include <vector>
#include <cmath>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    std::vector<int> numbers = {1, 11, 12, 21, 22, 31, 32};
    int result = specialFilter(numbers);
    std::cout << "Special numbers: " << result;
    return 0;
}
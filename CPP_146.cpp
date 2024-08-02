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
    std::vector<int> numbers = {100, 101, 102, 103, 104};
    int result = specialFilter(numbers);
    std::cout << "Number of elements that satisfy the condition: " << result << std::endl;
    return 0;
}
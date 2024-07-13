#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int count = specialFilter({1, 11, 12, 21, 22, 31, 32, 41, 42});
    std::cout << "The number of special numbers is: " << count << std::endl;
    return 0;
}
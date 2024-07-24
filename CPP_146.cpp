#include <iostream>
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
    assert(specialFilter({}) == 0);
    assert(specialFilter({11, 12, 13, 14, 15, 16, 17, 18, 19, 20}) == 10);
    assert(specialFilter({-11, -12, -13, -14, -15, -16, -17, -18, -19, -20}) == 0);
    return 0;
}
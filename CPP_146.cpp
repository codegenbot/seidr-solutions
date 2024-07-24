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
    assert(specialFilter({11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 32, 33, 34, 35, 36, 37, 38, 39}) == 20);
    assert(specialFilter({-11, -12, -13, -14, -15, -16, -17, -18, -19, -21, -22, -23, -24, -25, -26, -27, -28, -29, -31, -32, -33, -34, -35, -36, -37, -38, -39}) == 20);
    assert(specialFilter({10, 20, 30, 40, 50, 60, 70, 80, 90, -10, -20, -30, -40, -50, -60, -70, -80, -90}) == 0);
    return 0;
}
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
    assert(specialFilter({1, 11, 111}) == 3);
    assert(specialFilter({-11, -101, 10}) == 2);
    assert(specialFilter({12, 20, 30}) == 0);
    return 0;
}
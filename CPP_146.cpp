#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        int num = abs(x);
        if ((num / 10000 > 0 || (num / 100) % 10 > 4) && (num / 1000) % 10 < 3) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    // Add more test cases as needed
    return 0;
}
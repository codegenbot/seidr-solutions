#include <cassert>

int specialFilter(std::vector<int> nums) {
    int c = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            c++;
        }
    }
    return c; 
}

int main() {
    assert(specialFilter({}) == 0);
    // add more test cases as needed
    return 0;
}
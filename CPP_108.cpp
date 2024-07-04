#include <vector>
#include <iostream>
#include <cassert>

int digit_sum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int count_nums(const std::vector<int>& n) {
    int count = 0;
    for (int num : n) {
        if (digit_sum(num) > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    std::cout << "All tests passed.\n";
    return 0;
}
#include <vector>
#include <iostream>
#include <assert.h>

int count_nums(std::vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    // add your test cases here
    return 0;
}
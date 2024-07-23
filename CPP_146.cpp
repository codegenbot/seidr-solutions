#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        if ((x % 11) == 1 || (x % 11) == -1) {
            count++;
        }
    }
    return count;
}
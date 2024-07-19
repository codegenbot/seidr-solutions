#include <initializer_list>
#include <cassert>
#include <vector>
#include <iostream>

int specialFilter(std::initializer_list<int> nums) {
    int c = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            c++;
        }
    }
    return c; 
}
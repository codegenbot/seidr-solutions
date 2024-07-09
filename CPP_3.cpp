#include <iostream>
#include <vector>
#include <cassert>

int below_zero(const std::vector<int>& operations) {
    int balance = 0;
    for (int i = 0; i < operations.size(); ++i) {
        balance += operations[i];
        if (balance < 0) {
            return i;
        }
    }
    return -1;
}
#include <iostream>
#include <vector>
#include <cassert>

int search(const std::vector<int>& nums) {
    int maxFreq = -1;
    for (int num : nums) {
        int freq = 0;
        for (int i : nums) {
            if (i == num) {
                freq++;
            }
        }
        if (num > freq && freq > maxFreq) {
            maxFreq = freq;
        }
    }
    return maxFreq > 0 ? maxFreq : -1;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
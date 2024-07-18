#include <iostream>
#include <vector>
#include <cassert>

int search(const std::vector<int>& lst) {
    int maxFreqNum = 0;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > freq && freq >= maxFreqNum) {
            maxFreqNum = freq;
        }
    }
    return maxFreqNum > 0 ? maxFreqNum : -1;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
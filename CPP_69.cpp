#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

int search(const std::vector<int>& lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = std::count(lst.begin(), lst.end(), num);
        if (freq > maxFreq) {
            maxFreq = freq;
        }
    }
    if (maxFreq > 0) {
        return maxFreq;
    }
    return -1;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
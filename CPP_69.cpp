#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int search(std::vector<int> lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = std::count(lst.begin(), lst.end(), num);
        if (num > maxFreq && freq >= num) {
            maxFreq = num;
        }
    }
    return maxFreq;
}

int main() {
    assert (search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
#include <iostream>
#include <vector>
#include <cassert>

int search(const std::vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int elem : lst) {
            if (elem == num) {
                freq++;
            }
        }
        if (freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
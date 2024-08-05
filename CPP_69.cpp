#include <vector>
#include <cassert>

int search(const std::vector<int>& lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int elem : lst) {
            if (elem == num) {
                freq++;
            }
        }
        if (num == freq && freq > maxFreq) {
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
}
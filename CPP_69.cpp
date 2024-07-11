#include <vector>
#include <cassert>

int search(const std::vector<int>& lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i : lst) {
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
#include <iostream>
#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            return p.first;
        }
    }
    return -1;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
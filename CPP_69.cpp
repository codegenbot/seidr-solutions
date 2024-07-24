#include <unordered_map>
#include <vector>

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
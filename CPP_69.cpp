#include <map>
#include <vector>

int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int x : lst) {
        if (!freq.count(x)) {
            freq[x] = 1;
        } else {
            freq[x]++;
        }
    }
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            return p.first;
        }
    }
    return -1;
}
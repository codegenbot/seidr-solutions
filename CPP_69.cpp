#include <map>
#include <vector>
#include <cassert>

int search(std::vector<int> lst) {
    std::map<int, int> freqMap;
    for (auto num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first;
        }
    }
    return -1;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
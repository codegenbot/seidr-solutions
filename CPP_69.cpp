```cpp
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freqMap;
    for (int num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first) {
            return it->first;
        }
    }
    return -1;
}
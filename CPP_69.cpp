```cpp
#include <vector>
#include <map>

int search(std::vector<int> intVector) {
    std::map<int, int> freqMap;
    for (int num : intVector) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }

    int maxFreqNum = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            maxFreqNum = it->first;
            break;
        }
    }

    return maxFreqNum;
}
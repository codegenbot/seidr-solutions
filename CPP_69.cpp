#include <iostream>
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
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > 0) {
            return pair.first;
        }
    }
    return -1;
}
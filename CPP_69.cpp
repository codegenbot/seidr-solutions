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

    int maxFreqNum = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            maxFreqNum = it->first;
            break;
        }
    }

    return maxFreqNum;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    std::cout << "Output: " << search({3, 10, 10, 9, 2}) << std::endl; 
    return 0;
}
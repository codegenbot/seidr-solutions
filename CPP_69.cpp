#include <map>
#include <iostream>

std::map<int, int> freqMap;

int findMaxFreq(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (freqMap.find(arr[i]) == freqMap.end()) {
            freqMap[arr[i]] = 1;
        } else {
            freqMap[arr[i]]++;
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
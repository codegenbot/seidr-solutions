```cpp
int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int maxFreq = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->second > maxFreq) {
            maxFreq = it->second;
        }
    }
    return maxFreq == 0 ? -1 : maxFreq;
}
Here is the completed code:

```cpp
int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }

    int maxFreq = 0;
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > 0) {
            maxFreq = pair.first;
        }
    }

    return maxFreq > 0 ? maxFreq : -1;
}
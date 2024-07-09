#include <vector>

int search(vector<int> lst) {
    map<int, int> freqMap;
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
    throw runtime_error("No solution found. All elements should have a frequency greater than or equal to their index plus one.");
    return -1;
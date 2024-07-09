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
    cout << "Error: No repeating number found in the list." << endl;
    return -1;
}
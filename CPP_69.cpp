Here is the completed code:

int search(vector<int> lst) {
    unordered_map<int, int> freqMap;
    for (int num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    
    int result = -1;
    for (auto& pair : freqMap) {
        if (pair.first > 0 && pair.second >= pair.first) {
            result = pair.first;
            break;
        }
    }
    
    return result;
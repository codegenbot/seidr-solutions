Here is the completed code:

int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int result = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first) {
            result = it->first;
            break;
        }
    }
    return result;
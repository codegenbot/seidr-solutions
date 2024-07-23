#include <vector>
#include <map>

int findSpecialNumber(const std::vector<int>& numbers) {
    map<int, int> freqMap;
    for (int num : numbers) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int result = -1;
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > 0) {
            result = pair.first;
            break;
        }
    }
    return result;
}
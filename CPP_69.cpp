#include <vector>
using namespace std;

int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }

    int maxVal = -1;
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > 0) {
            maxVal = pair.first;
            break;
        }
    }

    return maxVal;
}
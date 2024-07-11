#include <vector>
#include <map>

using namespace std;

int search(vector<int> lst) {
    map<int, int> freqMap;
    for (auto num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }

    int maxFreq = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            maxFreq = it->first;
            break;
        }
    }

    return maxFreq;
}
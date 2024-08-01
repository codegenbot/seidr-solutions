#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    int maxFreqNum = -1;
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
        if (freqMap[num] >= freqMap[maxFreqNum] && num > maxFreqNum) {
            maxFreqNum = num;
        }
    }
    
    return maxFreqNum;
}
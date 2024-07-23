#include <bits/stdc++.h>
using namespace std;

int findTheMiddleElement(vector<int>& nums) {
    map<int, int> freqMap;
    for (int num : nums) {
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
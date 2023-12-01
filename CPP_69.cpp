#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;

int search(vector<int> lst) {
    unordered_map<int, int> freqMap;
    int maxFreq = 0;
    int result = -1;

    // Count the frequency of each integer
    for (int num : lst) {
        freqMap[num]++;
        maxFreq = max(maxFreq, freqMap[num]);
    }

    // Find the greatest integer that satisfies the condition
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->first == it->second && it->second > maxFreq) {
            result = max(result, it->first);
        }
    }

    return result;
}
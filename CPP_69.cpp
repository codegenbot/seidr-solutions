#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int search(vector<int> lst) {
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
    }
    
    int maxNum = -1;
    for (auto it : freqMap) {
        if (it.second >= it.first && it.first > maxNum) {
            maxNum = it.first;
        }
    }
    
    return maxNum;
}
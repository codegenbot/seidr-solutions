#include <iostream>
#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    std::unordered_map<int, int> freqMap;
    
    // Count the frequency of each integer
    for (int num : lst) {
        freqMap[num]++;
    }
    
    int result = -1;
    
    // Find the greatest integer that satisfies the condition
    for (auto& pair : freqMap) {
        int num = pair.first;
        int freq = pair.second;
        
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    
    return result;
}
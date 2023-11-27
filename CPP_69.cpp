#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    std::unordered_map<int, int> freqMap;
    
    // Count the frequency of each integer in the vector
    for (int num : lst) {
        freqMap[num]++;
    }
    
    int result = -1;
    
    // Find the greatest integer that has a frequency greater than or equal to the value of the integer itself
    for (const auto& pair : freqMap) {
        int num = pair.first;
        int freq = pair.second;
        
        if (num > freq && freq >= result) {
            result = num;
        }
    }
    
    return result;
}
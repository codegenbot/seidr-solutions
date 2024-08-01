#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    int maxFreqNum = -1;
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
        if (freqMap[num] >= num && num > maxFreqNum) {
            maxFreqNum = num;
        }
    }
    
    return maxFreqNum;
}

int main() {
    // Add test cases here
    assert (search({3, 10, 10, 9, 2}) == -1);
    
    return 0;
}
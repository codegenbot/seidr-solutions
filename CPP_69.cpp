#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    int result = -1;
    
    for (int num : lst) {
        freq[num]++;
        maxFreq = max(maxFreq, freq[num]);
    }
    
    for (auto it : freq) {
        if (it.first > 0 && it.second >= it.first && it.second == maxFreq) {
            result = max(result, it.first);
        }
    }
    
    return result;
}
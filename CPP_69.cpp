#include <vector>
#include <unordered_map>

int search(const std::vector<int>& lst) {
    int result = -1;
    std::unordered_map<int, int> freq;
    
    for (int num : lst) {
        if (freq[num] == 0) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second == it->first && it->first > result) {
            result = it->first;
        }
    }
    
    return result;
}
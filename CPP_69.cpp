#include <vector>
#include <unordered_map>

int search(const std::vector<int>& lst) {
    int result = -1;
    std::unordered_map<int, int> freq;
    
    for (int num : lst) {
        freq[num]++;
    }
    
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->first > result) {
            result = it->first;
        }
    }
    
    return result;
}
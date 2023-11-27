#include <algorithm>
#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    
    for (int num : lst) {
        freq[num]++;
    }
    
    int result = -1;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->second > result) {
            result = it->second;
        }
    }
    
    return result;
}
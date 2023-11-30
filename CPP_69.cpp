#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    int res = -1;
    
    // Count the frequency of each integer
    for (int num : lst) {
        freq[num]++;
        maxFreq = max(maxFreq, freq[num]);
    }
    
    // Find the greatest integer with frequency greater than or equal to itself
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first >= it->second && it->second >= maxFreq) {
            res = max(res, it->first);
        }
    }
    
    return res;
}
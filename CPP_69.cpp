#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    
    int res = -1;
    for (auto it : freq) {
        if (it.first > it.second && it.first >= 2) {
            res = std::max(res, it.first);
        }
    }
    
    return res;
}
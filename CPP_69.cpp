#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    int res = -1;
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->second >= it->first) {
            res = std::max(res, it->first);
        }
    }
    return res;
}
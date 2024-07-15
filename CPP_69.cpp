#include <vector>
#include <unordered_map>

int findUnique(std::vector<int> lst) {
    int result = -1;
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->second >= it->first) {
            result = std::max(result, it->first);
        }
    }
    return result;
}
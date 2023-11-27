#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    int maxFreq = 0;
    int result = -1;

    for (int num : lst) {
        freq[num]++;
        maxFreq = std::max(maxFreq, freq[num]);
    }

    for (auto it : freq) {
        if (it.first > 0 && it.second >= it.first && it.second == maxFreq) {
            result = std::max(result, it.first);
        }
    }

    return result;
}
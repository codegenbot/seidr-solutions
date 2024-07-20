#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }

    int ans = -1;
    for (const auto& pair : freq) {
        if (pair.second >= pair.first && pair.first > ans) {
            ans = pair.first;
        }
    }

    return ans;
}
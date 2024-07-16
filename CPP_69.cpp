#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    int res = -1;

    for (int num : lst) {
        freq[num]++;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first && it->first > res) {
            res = it->first;
        }
    }

    return res;
}
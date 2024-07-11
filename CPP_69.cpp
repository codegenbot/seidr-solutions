#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    int maxVal = -1;

    for (int num : lst)
        freq[num]++;

    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->first > it->second && it->second > maxVal)
            maxVal = it->second;
    }

    return (maxVal == -1) ? -1 : maxVal;
}
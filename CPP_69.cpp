#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    int result = -1;

    for (int num : lst) {
        freq[num]++;
        maxFreq = max(maxFreq, freq[num]);
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first == it->second && it->second > maxFreq) {
            result = it->first;
            break;
        }
    }

    return result;
}
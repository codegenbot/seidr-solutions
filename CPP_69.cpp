#include <unordered_map>
#include <algorithm>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (const auto& pair : freq) {
        if (pair.second >= pair.first && pair.first > result) {
            result = pair.first;
        }
    }
    return result;
}
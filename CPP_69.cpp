#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (const auto& pair : freq) {
        if (pair.second >= pair.first) {
            result = max(result, pair.first);
        }
    }
    return result;
}
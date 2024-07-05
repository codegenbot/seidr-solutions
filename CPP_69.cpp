#include <unordered_map>
#include <algorithm>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (const auto& [num, count] : freq) {
        if (count >= num) {
            result = max(result, num);
        }
    }
    return result;
}
#include <unordered_map>

int search(std::vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        if (!freq.count(num)) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    int max_value = -1;
    for (auto& pair : freq) {
        if (pair.second > 0 && pair.first >= pair.second) {
            max_value = pair.second;
            break;
        }
    }
    return max_value;
}
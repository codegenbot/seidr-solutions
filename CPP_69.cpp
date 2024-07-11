#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        if (!freq.count(num)) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    int max_value = -1;
    for (auto& pair : freq) {
        if (pair.second >= pair.first && pair.first > 0) {
            max_value = pair.first;
            break;
        }
    }
    return max_value;
}
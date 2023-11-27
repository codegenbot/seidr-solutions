#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    std::unordered_map<int, int> frequency;
    int maxFrequency = 0;
    int result = -1;

    for (int num : lst) {
        frequency[num]++;
        maxFrequency = std::max(maxFrequency, frequency[num]);
    }

    for (const auto& pair : frequency) {
        if (pair.first > 0 && pair.second >= pair.first && pair.second == maxFrequency) {
            result = std::max(result, pair.first);
        }
    }

    return result;
}
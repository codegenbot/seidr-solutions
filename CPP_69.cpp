#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> frequencyMap;
    int maxFrequency = 0;
    int result = -1;

    for (int num : lst) {
        frequencyMap[num]++;
        if (frequencyMap[num] >= num && num > result) {
            result = num;
            maxFrequency = frequencyMap[num];
        }
    }

    return (maxFrequency == 0) ? -1 : result;
}
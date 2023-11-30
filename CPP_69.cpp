#include <iostream>
#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    std::unordered_map<int, int> frequencyMap;

    // Count the frequency of each integer
    for (int num : lst) {
        frequencyMap[num]++;
    }

    int result = -1;

    // Find the greatest integer with frequency greater than or equal to the value of the integer itself
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        if (it->first <= it->second && it->first > result) {
            result = it->first;
        }
    }

    return result;
}
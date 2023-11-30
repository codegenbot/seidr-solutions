#include <iostream>
#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> frequency;

    // Count the frequency of each integer
    for (int num : lst) {
        frequency[num]++;
    }

    int result = -1;
    for (auto pair : frequency) {
        int num = pair.first;
        int freq = pair.second;

        // Check if the frequency is greater than or equal to the integer itself
        if (freq >= num && num > result) {
            result = num;
        }
    }

    return result;
}
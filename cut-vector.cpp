#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        if (abs(vec[i] - vec[i + 1]) <= minDiff) {
            minDiff = abs(vec[i] - vec[i + 1]);
            splitIndex = i;
        }
    }

    return {{}, {}}; // or return whatever you want here
}
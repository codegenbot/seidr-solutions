#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int idx = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] == vec[i + 1]) continue;
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }

    return {{}, {}}; // replace this with your actual implementation
}
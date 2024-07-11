#include <vector>
#include <algorithm>

std::vector<int> cutVector(std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int index = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }

    return {{vec.begin(), vec.begin() + index}, {vec.begin() + index, vec.end()}};
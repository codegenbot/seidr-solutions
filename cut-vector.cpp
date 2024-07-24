#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < vec.size(); ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; ++j) {
            sumLeft += vec[j];
        }
        for (int j = i; j < vec.size(); ++j) {
            sumRight += vec[j];
        }

        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    return {{}, {}};
}
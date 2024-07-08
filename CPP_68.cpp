#include <iostream>
#include <vector>
#include <utility>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return (a.first == b.first);
}

std::pair<int, int> pluck(std::vector<std::pair<int, int>> vec) {
    if(vec.empty()) {
        return {0, 0};
    }
    else{
        return vec[0];
    }
}

std::vector<std::pair<int, int>> findMinEvenNode(std::vector<int> arr) {
    std::vector<std::pair<int, int>> evenNodes;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    }

    int minEvenValue = evenNodes[0].first;
    int minIndex = evenNodes[0].second;

    for (int i = 1; i < evenNodes.size(); i++) {
        if (evenNodes[i].first < minEvenValue) {
            minEvenValue = evenNodes[i].first;
            minIndex = evenNodes[i].second;
        } else if (evenNodes[i].first == minEvenValue) {
            minIndex = std::min(minIndex, evenNodes[i].second);
        }
    }

    return {{minEvenValue, minIndex}};
}
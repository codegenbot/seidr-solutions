#include <iostream>
#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    std::vector<std::pair<int, int>> nodes;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            nodes.push_back({arr[i], i});
        }
    }

    if (nodes.empty()) {
        return result;
    }

    sort(nodes.begin(), nodes.end());
    result = {nodes[0].first, nodes[0].second};

    return result;
}
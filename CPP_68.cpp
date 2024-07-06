#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    vector<pair<int, int>> evenNodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }
    
    if (evenNodes.empty()) {
        return {};
    }
    
    sort(evenNodes.begin(), evenNodes.end());
    return {{evenNodes[0].first, evenNodes[0].second}};
}
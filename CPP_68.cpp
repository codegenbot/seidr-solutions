#include <vector>
#include <algorithm>

std::pair<int, int> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> evenNodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }
    if (evenNodes.empty()) {
        return {};
    }
    std::sort(evenNodes.begin(), evenNodes.end());
    return *evenNodes.begin();
}
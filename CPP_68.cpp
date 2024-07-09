#include <vector>

bool issame(std::pair<int, int> p1, std::pair<int, int> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    
    if (arr.empty()) return result;
    
    int minEvenIndex = -1;
    int minEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenIndex = i;
        }
    }

    if (minEvenIndex != -1) {
        result.push_back({minEvenValue, minEvenIndex});
    }

    return result;
}
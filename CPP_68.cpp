#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) {
        return result;
    }
    
    int minEven = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
        }
    }
    
    result.push_back(minEven);
    return result;
}
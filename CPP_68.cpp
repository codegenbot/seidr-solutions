```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result = {};
    
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        bool isEven = (arr[i] % 2 == 0);
        
        for (int j = 0; j < arr.size(); j++) {
            if (i != j && issame(isEven, (arr[j] % 2) == 0)) {
                result.push_back({arr[i], i});
                break;
            }
        }
    }

    return result;
}
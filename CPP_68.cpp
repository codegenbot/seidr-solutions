#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    
    if(arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back({minEven, minIndex});

    return result;
}

int main() {
    std::vector<int> array = {1, 3, 5, 2, 6, 4};
    auto pairs = pluck(array);
    for(auto& pair : pairs) {
        std::cout << "Pair: (" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;
}
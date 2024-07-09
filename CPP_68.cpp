#include <vector>
#include <algorithm>

bool issame(int x) {
    return x % 2 == 0;
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result = {};

    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        if (issame(arr[i])) {
            bool found = false;
            for (const auto& pair : result) {
                if (pair.first == arr[i]) {
                    found = true;
                    break;
                }
            }

            if (!found)
                result.push_back({arr[i], i});
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {2, 4, 6, 1, 3};
    auto pairs = pluck(nums);
    
    for (const auto& pair : pairs) {
        std::cout << "Pair: " << pair.first << " at index " << pair.second << std::endl;
    }
    
    return 0;
}
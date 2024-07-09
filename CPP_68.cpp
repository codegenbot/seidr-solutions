```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<pair<int, int>> result = {};
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

int main() {
    std::vector<int> arr = {2, 4, 6};
    auto res = pluck(arr);
    for (const auto& p : res) {
        if (issame(p.first, 0)) {
            std::cout << "Even value: " << p.first << ", Index: " << p.second << std::endl;
        }
    }
    return 0;
}
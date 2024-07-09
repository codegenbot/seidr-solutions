#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return (v1.empty() && v2.empty());
}

std::vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int minEven = INT_MAX;
    int index = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    return {(int)minEven, index};
}
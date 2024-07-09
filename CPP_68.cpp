```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool issame(std::vector<std::pair<int, int>> a, std::vector<std::pair<int, int>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i].first == b[i].first && a[i].second == b[i].second)) return false;
    }
    return true;
}

bool pluck(std::vector<int> arr, std::vector<std::pair<int, int>> &result) {
    if (arr.empty()) return true;

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

    return true;
}

int main() {
    std::vector<int> array = {7, 9, 7, 1};
    std::vector<std::pair<int, int>> res;
    pluck(array, res);
    assert(issame(res, {}));
    // Your other code here
}
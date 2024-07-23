#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 3, 4, 2, 8};
    std::vector<int> result;
    int maxRight = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    std::reverse(result.begin(), result.end());
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= result[0]) {
            result.clear();
            result.push_back(arr[i]);
            break;
        } else {
            result.erase(result.begin());
        }
    }
    return 0;
}
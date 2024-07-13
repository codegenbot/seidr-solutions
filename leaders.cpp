#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    std::vector<int> leaders;
    int max_right = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    leaders.push_back(arr.back());
    return leaders;
}
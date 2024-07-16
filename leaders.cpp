#include <vector>

std::vector<int> calculateLeaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> leaders;

    if (n == 0)
        return leaders;

    int maxSoFar = arr.back();

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxSoFar) {
            leaders.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }

    leaders.push_back(arr.back());

    return leaders;
}
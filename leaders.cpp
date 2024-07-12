#include <vector>

std::vector<int> findLeaders(std::vector<int> arr) {
    std::vector<int> leaders;
    int n = arr.size();
    int maxRight = arr[n-1];
    leaders.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}
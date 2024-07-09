#include <vector>
#include <string>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            result.push_back(arr[i]);
        }
    }
    return result;
}
#include <vector>

using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRight = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
#include <vector>

vector<pair<int, int>> pluck(const vector<int>& arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int smallestEvenIndex = -1;
    int smallestEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            smallestEvenIndex = i;
        }
    }

    if (smallestEvenIndex != -1) {
        result.push_back({smallestEvenValue, smallestEvenIndex});
    }

    return result;
}
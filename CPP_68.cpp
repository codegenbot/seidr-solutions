#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int smallestEvenIndex = -1;
    int smallestEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenIndex = i;
            smallestEvenValue = arr[i];
        }
    }

    if (smallestEvenIndex != -1) {
        result.push_back({smallestEvenValue, smallestEvenIndex});
    } else {
        result.push_back({0, 0}); // Return {0, 0} if no even values are found
    }

    return result;
}
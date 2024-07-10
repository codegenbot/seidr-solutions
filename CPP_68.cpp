#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    if (arr.empty()) {
        return {{}};
    }

    vector<int> result;
    int smallestEvenValue = INT_MAX, smallestIndex = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }

    result.push_back(smallestEvenValue);
    result.push_back(smallestIndex);

    return {result};
}
#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> res;
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    res.push_back({smallestEven, smallestIndex});

    return res;
}
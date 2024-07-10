#include <vector>

using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    int smallest_value = INT_MAX;
    int index_of_smallest_value = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_value) {
            smallest_value = arr[i];
            index_of_smallest_value = i;
        }
    }

    if (smallest_value != INT_MAX) {
        result.push_back({smallest_value, index_of_smallest_value});
    } else {
        result.push_back({});

    }

    return result;
}
#include <vector>

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if (arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }

    vector<int> output;
    output.push_back(smallest_even);
    output.push_back(index);

    result.push_back(output);

    return result;
}
#include <vector>

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if (arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index_of_smallest_even = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_of_smallest_even = i;
        }
    }

    vector<int> temp;
    temp.push_back(smallest_even);
    temp.push_back(index_of_smallest_even);

    result.push_back(temp);

    return result;
}
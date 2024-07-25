#include <iostream>
#include <vector>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return {};

    int smallest_even = INT_MAX; // Initialize with positive infinity
    int index_of_smallest_even = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_of_smallest_even = i;
        }
    }

    result.push_back(smallest_even);
    result.push_back(index_of_smallest_even);

    return result;
}
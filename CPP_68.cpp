#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int smallest_even_value = INT_MAX;
    int index_of_smallest_even_value = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even_value) {
            smallest_even_value = arr[i];
            index_of_smallest_even_value = i;
        }
    }

    result.push_back({smallest_even_value, index_of_smallest_even_value});

    return result;
}
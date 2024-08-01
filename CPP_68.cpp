#include <vector>
#include <algorithm>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return result;

    int smallest_even = INT_MAX;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
        }
    }

    if(smallest_even != INT_MAX) {
        result.push_back(smallest_even);
        int index_smallest_even = std::distance(std::begin(arr), std::find(std::begin(arr), std::end(arr), smallest_even));
        result.push_back(index_smallest_even);
    } else {
        result.push_back(-1);
        result.push_back(-1);
    }

    return result;
}
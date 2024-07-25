```cpp
#include <vector>

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    if (arr.empty()) return result;

    int smallest_even_value = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even_value) {
            smallest_even_value = arr[i];
        }
    }

    bool found_smallest_even = false;
    int smallest_even_index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (!found_smallest_even && arr[i] == smallest_even_value) {
            smallest_even_index = i;
            found_smallest_even = true;
        }
    }

    result.push_back(smallest_even_value);
    if (found_smallest_even)
        result.push_back(smallest_even_index);

    return result;
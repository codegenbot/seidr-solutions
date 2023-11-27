#include <vector>
#include <limits>
#include <cassert>
#include <algorithm>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    assert(a.size() == b.size());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallest_value = INT_MAX;
    int smallest_index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_value) {
            smallest_value = arr[i];
            smallest_index = i;
        }
    }

    if (smallest_index != -1) {
        result.push_back(smallest_value);
        result.push_back(smallest_index);
    }
    
    return result;
}

int main() {
    assert (issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}
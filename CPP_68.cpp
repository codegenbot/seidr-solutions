#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallest_even = INT_MAX;
    int smallest_index = INT_MAX;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }

    if (smallest_even != INT_MAX) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}
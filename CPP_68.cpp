#include <vector>
#include <cassert>
#include <climits>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallest_even = INT_MAX;
    int smallest_even_index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_even_index = i;
        }
    }

    if (smallest_even_index != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_even_index);
    }

    return result;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(pluck({1, 2, 3, 4, 5}), {2, 1}));
    assert(issame(pluck({1, 3, 5}), {}));

    return 0;
}
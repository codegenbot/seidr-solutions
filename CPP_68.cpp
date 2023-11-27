#include <vector>
#include <limits>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest_value = numeric_limits<int>::max();
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
    assert(pluck({1, 2, 3, 4, 5, 6}) == vector<int>({2, 1}));
    assert(pluck({2, 4, 6, 8, 10}) == vector<int>({2, 0}));
    assert(pluck({1, 3, 5, 7, 9}) == vector<int>({}));
    assert(issame({1, 2, 3}, {1, 2, 3}));
    assert(!issame({1, 2, 3}, {1, 2, 4}));
    return 0;
}
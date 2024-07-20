#include <iostream>
#include <vector>
#include <cassert>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    assert(smallest_change({1, 2, 3, 4, 5}) == 2);
    assert(smallest_change({1, 2, 2, 1}) == 0);
    assert(smallest_change({1, 2, 3, 2, 1}) == 0);
    assert(smallest_change({1, 2, 3, 3, 1}) == 1);

    return 0;
}
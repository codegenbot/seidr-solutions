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
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    assert(smallest_change(test1) == 2);

    std::vector<int> test2 = {1, 2, 3, 2, 1};
    assert(smallest_change(test2) == 0);

    std::vector<int> test3 = {1, 2, 2, 1};
    assert(smallest_change(test3) == 0);

    return 0;
}
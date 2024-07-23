#include <vector>
#include <iostream>
#include <cassert>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            changes++;
        }
    }

    return changes;
}

int main() {
    std::cout << smallest_change({0, 1}) << std::endl;
    return 0;
}
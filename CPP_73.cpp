#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] != arr[j]) {
                changes++;
            }
        }
    }

    return changes;
}

int main() {
    std::cout << smallest_change({0, 1}) << std::endl;
    return 0;
}
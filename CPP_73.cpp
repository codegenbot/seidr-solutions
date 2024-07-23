#include <vector>
#include <iostream>
#include <initializer_list>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            changes++;
        }
    }

    return changes - 1;
}

int main() {
    std::vector<int> v = {0, 1};
    int result = smallest_change(v);
    std::cout << "The number of changes is: " << result << std::endl;
    return 0;
}
#include <vector>
#include <cassert>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Write test cases and call the add_elements function here for testing
    assert(add_elements(std::vector<int>{1}, 1) == 0);

    return 0;
}
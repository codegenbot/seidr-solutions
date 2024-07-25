#include <vector>
#include <cassert>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int result = smallest_change(numbers);
    assert(smallest_change({0, 1}) == 1);
    return 0;
}
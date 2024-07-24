#include <vector>
#include <cassert>

int smallest_change(const std::vector<int>& arr) {
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
    std::vector<int> numbers = {0, 1};
    assert(smallest_change(numbers) == 1);
    return 0;
}
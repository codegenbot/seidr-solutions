```
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
    assert(add_elements(std::vector<int>{1}, 1) == 0);
    assert(add_elements(std::vector<int>{12, 5, 23}, 3) == 35);
    return 0;
}
```
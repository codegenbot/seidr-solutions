```cpp
#include <vector>
#include <assert.h>

int solutions(std::vector<int> arr) {
    int count = 0;
    for (int i : arr) {
        if (i % 2 == 1)
            count++;
    }
    return count;
}

int main() {
    std::vector<int> arr = {3, 13, 2, 9};
    assert(solutions(arr) == 3);
    return 0;
}
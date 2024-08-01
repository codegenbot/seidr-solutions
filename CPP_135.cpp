#include <iostream>
#include <vector>
#include <assert.h>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr = {1, 2, 3};
    assert(can_arrange(arr) == -1);
    return 0;
}
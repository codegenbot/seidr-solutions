#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    int prev = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= prev) return i;
        prev = arr[i];
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    return 0;
}
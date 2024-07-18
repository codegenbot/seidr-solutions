#include <iostream>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n <= 1) {
        return true;
    }
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            if (count == 1) {
                return false;
            }
            if (i == 1 || arr[i] >= arr[i - 2]) {
                count++;
            }
            if (i == n - 1 || arr[i + 1] >= arr[i - 1]) {
                count++;
            }
        }
    }
    return count == 1;
}

int main() {
    assert(move_one_ball({}) == true);
    return 0;
}
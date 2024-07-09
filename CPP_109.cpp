#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool move_one_ball(std::vector<int> arr) {
    int i = 0;
    while (i < arr.size() - 1) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    return 0;
}
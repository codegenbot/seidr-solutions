#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    assert(can_arrange(arr) == -1);
    return 0;
}
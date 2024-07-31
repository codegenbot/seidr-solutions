#include <iostream>
#include <vector>
#include <cassert>

int can_arrange(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    std::vector<int> vec = {1,2,3,4,5};
    std::cout << can_arrange(vec) << std::endl;
    return 0;
}
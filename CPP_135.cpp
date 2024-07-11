#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    std::vector<int> testArr = {1, 3, 4};
    int result = can_arrange(testArr);
    if (result != -1) {
        for (int i = 0; i < result; i++) {
            std::cout << testArr[i] << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Array cannot be arranged.\n";
    }
    return 0;
}
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
    std::vector<int> testArr1 = {1, 2, 3, 4};
    int result1 = can_arrange(testArr1);
    if(result1 != -1) {
        for(int i=0; i<result1; i++) {
            std::cout << testArr1[i] << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Array can be arranged.\n";
    }

    return 0;
}
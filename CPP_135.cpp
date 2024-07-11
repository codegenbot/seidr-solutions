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
    std::vector<int> test1 = {1, 2, 3};
    std::cout << can_arrange(test1) << std::endl; 
    std::vector<int> test2 = {1, 4, 3};
    std::cout << can_arrange(test2) << std::endl; 
    return 0;
}
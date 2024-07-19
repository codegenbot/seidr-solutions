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
    std::vector<int> inputVector = {5, 3, 4, 2};
    int result = can_arrange(inputVector);
    std::cout << result << std::endl; 
    return 0;
}
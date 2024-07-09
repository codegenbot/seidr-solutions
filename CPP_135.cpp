#include <vector>
#include <iostream>

int main() {
    int can_arrange(std::vector<int> arr) {
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] <= arr[i - 1]) {
                return i;
            }
        }
        return -1;
    }

    std::vector<int> arr = {1, 2, 3}; 
    int result = can_arrange(arr);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
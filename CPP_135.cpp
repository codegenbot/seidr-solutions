```
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> val;
        arr.push_back(val);
    }
    
    int result = can_arrange(arr);
    if (result != -1) {
        std::cout << "The first pair of elements that are out of order is at index " << result << ".\n";
    } else {
        std::cout << "The array is already sorted.\n";
    }
    
    return 0;
}
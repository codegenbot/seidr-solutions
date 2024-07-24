#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }
    
    std::cout << "The first index at which the array cannot be arranged in increasing order is: " << can_arrange(arr) << std::endl;
    
    return 0;
}
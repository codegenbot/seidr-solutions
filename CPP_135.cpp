#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) return i - 1;
    }
    return -1;
}

int main() {
    int n, x;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        arr[i] = x;
    }
    
    int result = can_arrange(arr);
    
    if (result == -1) 
        std::cout << "Array is already arranged.\n";
    else
        std::cout << "First element that cannot be placed to the end: " << arr[result] << "\n";
        
    return 0;
}
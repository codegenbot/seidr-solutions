#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) return i - 1;
    }
    return -1;
}

int main() {
    std::vector<int> arr;
    int n;
    
    // input
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }

    // process
    int result = can_arrange(arr);

    // output
    if(result == -1) {
        std::cout << "The array is already sorted.";
    } else {
        std::cout << "Minimum index of first pair of out-of-order elements: " << result;
    }
    
    return 0;
}
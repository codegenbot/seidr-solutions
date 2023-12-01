#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr){
    int largestIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            largestIndex = i-1;
        }
    }
    return largestIndex;
}

int main() {
    // Test cases
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {5, 4, 3, 2, 1};
    std::vector<int> arr3 = {1, 3, 2, 4, 5};
    
    std::cout << can_arrange(arr1) << std::endl;  // Output: -1
    std::cout << can_arrange(arr2) << std::endl;  // Output: 3
    std::cout << can_arrange(arr3) << std::endl;  // Output: 1
    
    return 0;
}
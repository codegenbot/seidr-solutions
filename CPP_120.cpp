#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int maximum(int* arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int mainProblemCPP120() {
    std::vector<int> vec1(3, 0); 
    std::vector<int> vec2({1, 2, 3}); 
    
    if (!issame(vec1, vec2)) { // Compare vectors
        std::cout << "Vectors are not the same." << std::endl;
    } else {
        std::cout << "Vectors are the same" << std::endl;
    }
    
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = sizeof(arr) / sizeof(arr[0]); 
    // Create a vector from the array
    std::vector<int> vec(arr, arr + n);
    
    if (vec.empty()) { // Check for empty vectors
        std::cout << "Vectors are empty." << std::endl;
    } else {
        std::cout << "Vectors are not empty" << std::endl;
    }
    
    int* array = &arr[0];
    int max = maximum(arr, n); 
    std::cout << "Maximum value is: " << max << std::endl;
    
    return 0;
}
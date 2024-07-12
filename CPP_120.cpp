```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int maximum(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int mainProblemCPP120() {
    std::vector<int> vec1 = {0, 1, 2}; // Initialize with specific values
    
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    assert (!issame(std::vector<int>(arr, arr + sizeof(arr) / sizeof(arr[0])), {}));
    
    return 0;
}
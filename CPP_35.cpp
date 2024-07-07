#include <algorithm>
#include <cmath>

int findMax(int arr[], int n) {
    if (n <= 0) {
        std::cout << "Error: Input array is empty." << std::endl;
        return -1;
    }
    
    return *max_element(arr, arr+n);
}
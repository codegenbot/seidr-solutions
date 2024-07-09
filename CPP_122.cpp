#include <vector> // Include the vector library

int add_elements(std::vector<int> arr, int k) { // Use std::vector instead of vector
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}
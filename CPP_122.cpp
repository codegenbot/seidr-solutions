#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr = {5, 12, 75, 47, 88};
    int k = 5;
    std::cout << "Sum of elements between 10 and 99: " << add_elements(arr, k) << std::endl;
    
    return 0;
}
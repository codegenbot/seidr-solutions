#include <iostream>

int add_elements(int arr[], int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {5, 12, 35, 45, 82};
    int k = sizeof(arr) / sizeof(arr[0]);
    
    int result = add_elements(arr, k);

    std::cout << "Sum of elements between 10 and 99: " << result << std::endl;

    return 0;
}
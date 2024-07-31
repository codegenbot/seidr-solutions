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
    int arr[] = {5, 25, 15, 10, 100};
    int k = 5;
    int result = add_elements(arr, k);
    std::cout << "Sum of elements between 10 and 99: " << result << std::endl;
    return 0;
}
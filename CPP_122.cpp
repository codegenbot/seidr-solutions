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
    int arr[] = {15, 5, 25, 10, 99};
    int k = 5;
    std::cout << add_elements(arr, k) << std::endl;
    return 0;
}
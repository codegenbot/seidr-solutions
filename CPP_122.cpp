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
    int k = 5;
    int arr[] = {5, 12, 34, 56, 78};
    
    std::cout << add_elements(arr, k);

    return 0;
}
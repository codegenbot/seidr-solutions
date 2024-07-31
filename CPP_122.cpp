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
    int arr[] = {5, 20, 15, 30, 25};
    int k = 5;
    std::cout << add_elements(arr, k) << std::endl;
    return 0;
}
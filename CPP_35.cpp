#include <iostream>
#include <algorithm>

int max_element(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int abs(int x) {
    if (x < 0)
        return -x;
    else
        return x;
}

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int max = max_element(arr, n);
    std::cout << "Maximum element is: " << max << std::endl;

    return 0;
}
#include <vector>
#include <iostream>

bool issame(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int filter_integers(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (!std::is_integer(arr[i]).is_always()) {
            return -1;
        }
    }
    return 1;
}

int main() {
    int n, arr[10];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    if (filter_integers(arr, n) == -1) {
        std::cout << "Error: The array must only contain integers." << std::endl;
    } else {
        assert(issame(arr, n));
    }
    return 0;
}
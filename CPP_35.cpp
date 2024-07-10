#include <iostream>
#include <algorithm>

int getMax(int n) {
    int max = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n]; // Declare an array of size n

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        if(x > max)
            max = x;
        arr[i] = x; // Fill the array
    }

    return *std::max_element(arr, arr+n); 
}
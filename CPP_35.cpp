#include <iostream>
#include <algorithm>

int getMax(int n) {
    int max = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int* arr = new int[n]; 

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    delete[] arr;
    return max;
}
#include <vector> 
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    std::vector<int> arr;
    int n, element;
    
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        arr.push_back(element);
    }
    
    std::cout << "Minimum changes to make the array a palindrome: " << smallest_change(arr) << std::endl;
    return 0;
}
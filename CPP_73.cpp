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
    int n, temp;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        arr.push_back(temp);
    }
    std::cout << "Smallest number of changes to make the array a palindrome: " << smallest_change(arr) << std::endl;
    return 0;
}
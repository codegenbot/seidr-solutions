#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst;
    int sum = 0;

    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    lst.resize(n);

    for (int i = 1; i < n; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> lst[i];
    }

    // Calculate sum of odd numbers
    for (int i = 1; i < n; i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }

    return sum;
}
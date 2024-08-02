#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst;
    int sum = 0;

    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        int val;
        std::cout << "Enter element " << i << ": ";
        std::cin >> val;
        lst.push_back(val);
    }

    // Calculate the sum of odd numbers
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }

    // Print the result
    std::cout << "Sum of odd numbers: " << sum << std::endl;

    return 0;
}
#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst;
    int sum = 0;

    // Read input from user
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        lst.push_back(num);
    }

    // Calculate the sum of odd numbers in the list
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }

    // Print the result
    std::cout << "Sum of odd numbers: " << sum << std::endl;

    return 0;
}
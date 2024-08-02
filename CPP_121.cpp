#include <vector>
#include <iostream>

int main() {
    int sum = 0;
    std::vector<int> lst;
    int n;

    // Read the number of elements in the list
    std::cin >> n;

    // Read the elements of the list
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
    std::cout << sum << std::endl;

    return 0;
}
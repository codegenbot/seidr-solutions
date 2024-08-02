#include <vector>
#include <iostream>

int main() {
    int sum = 0;
    std::vector<int> lst;
    int n;
    
    // Read input
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cout << "Enter element " << i << ": ";
        int val;
        std::cin >> val;
        lst.push_back(val);
    }
    
    // Calculate the sum of odd numbers
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    
    // Print output
    std::cout << "Sum of odd numbers: " << sum << std::endl;
    
    return 0;
}
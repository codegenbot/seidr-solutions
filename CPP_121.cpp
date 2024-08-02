#include <vector>
#include <iostream>

int main() {
    int sum = 0;
    std::vector<int> lst;
    int n;
    
    // Read input
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    // Calculate sum of odd elements
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    
    // Print output
    std::cout << "Sum of odd elements: " << sum << std::endl;
    
    return 0;
}
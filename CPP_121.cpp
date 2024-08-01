#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst;
    int sum = 0;
    
    // Get the list of numbers from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    // Calculate the sum of odd numbers
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    
    std::cout << "Sum of odd numbers: " << sum << std::endl;
    return 0;
}
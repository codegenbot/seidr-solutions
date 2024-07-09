#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int x;
        std::cout << "Enter element " << i << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    std::cout << "Sum of odd elements: " << solutions(lst) << std::endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

int main() {
    int n1, n2;
    std::cout << "Enter the size of first list: ";
    std::cin >> n1;
    std::vector<int> lst1(n1);
    for (int i = 0; i < n1; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst1[i];
    }
    
    std::cout << "Enter the size of second list: ";
    std::cin >> n2;
    std::vector<int> lst2(n2);
    for (int i = 0; i < n2; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst2[i];
    }
    
    if (n1 != n2) {
        std::cout << "Lists are not of the same size." << std::endl;
    } else {
        int oddCount = 0;
        for (int num : lst1) {
            if (num % 2 != 0) {
                oddCount++;
            }
        }
        if (oddCount == 0) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}
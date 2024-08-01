#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    for (int num : lst2) {
        if (oddCount > 0 && num % 2 == 0) {
            oddCount--;
        } else if (num % 2 != 0) {
            return "NO";
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}

int main() {
    std::vector<int> lst1;
    int n1, m1;
    std::cout << "Enter the number of elements in list1: ";
    std::cin >> n1;
    for (int i = 0; i < n1; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> m1;
        lst1.push_back(m1);
    }
    
    std::vector<int> lst2;
    int n2, m2;
    std::cout << "\nEnter the number of elements in list2: ";
    std::cin >> n2;
    for (int i = 0; i < n2; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> m2;
        lst2.push_back(m2);
    }
    
    std::cout << "\nThe output is: " << exchange(lst1, lst2) << std::endl;

    return 0;
}
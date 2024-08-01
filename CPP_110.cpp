```cpp
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
    int n;
    std::cout << "Enter the number of elements in list1: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst1.push_back(x);
    }
    
    std::vector<int> lst2;
    std::cout << "Enter the number of elements in list2: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst2.push_back(x);
    }
    
    std::cout << exchange(lst1, lst2) << std::endl;
    
    return 0;
}
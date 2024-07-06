```cpp
#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0 && oddCount > 0) {
            lst1.push_back(lst2[i]);
            lst2.erase(lst2.begin() + i);
            i--;
            oddCount--;
        }
    }
    return (oddCount == 0) ? "YES" : "NO";
}

int main() {
    std::vector<int> lst1, lst2;
    int n1, n2;

    // Get input
    std::cout << "Enter the size of lst1: ";
    std::cin >> n1;
    for (int i = 0; i < n1; ++i) {
        std::cout << "Enter element " << i + 1 << " of lst1: ";
        std::cin >> (lst1).push_back(i);
    }
    std::cout << "Enter the size of lst2: ";
    std::cin >> n2;
    for (int i = 0; i < n2; ++i) {
        std::cout << "Enter element " << i + 1 << " of lst2: ";
        std::cin >> (lst2).push_back(i);
    }

    // Call the function
    std::cout << exchange(lst1, lst2);

    return 0;
}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0 && oddCount > 0) {
            lst1.push_back(lst2[i]);
            lst2.erase(std::remove(lst2.begin(), lst2.end(), lst2[i]), lst2.end());
            i--;
            oddCount--;
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}

int main() {
    std::vector<int> lst1, lst2;
    int n1, n2;
    std::cout << "Enter the number of elements in list 1: ";
    std::cin >> n1;
    for (int i = 0; i < n1; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst1.push_back(i);
    }
    std::cout << "Enter the number of elements in list 2: ";
    std::cin >> n2;
    for (int i = 0; i < n2; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst2.push_back(i);
    }
    std::cout << exchange(lst1, lst2) << std::endl;
    return 0;
}
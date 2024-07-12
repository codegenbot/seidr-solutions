```cpp
#include <iostream>
#include <vector>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2);

int main() {
    int n1;
    int m1;
    int n2;
    int m2;
    std::cout << "Enter the number of elements in lst1: ";
    std::cin >> n1;
    std::cout << "Enter the number of elements in lst2: ";
    std::cin >> m2;
    std::vector<int> lst1(lst1.begin(), lst1.end());
    std::cout << "Enter elements of lst1: ";
    for (int &i : lst1) {
        std::cin >> i;
    }
    std::cout << "Enter the number of elements in lst2: ";
    std::cin >> n2;
    std::vector<int> lst2(lst2.begin(), lst2.end());
    std::cout << "Enter elements of lst2: ";
    for (int &i : lst2) {
        std::cin >> i;
    }
    std::string result = exchange(lst1, lst2);
    std::cout << result << std::endl;
    return 0;
}

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}
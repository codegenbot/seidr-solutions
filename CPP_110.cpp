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
    std::vector<int> lst1;
    for (int i = 0; i < n1; i++) {
        int temp;
        std::cout << "Enter element of lst1: ";
        std::cin >> temp;
        lst1.push_back(temp);
    }
    std::cout << "Enter the number of elements to fill lst2: ";
    std::cin >> m1;
    while (m1 < 0) {
        std::cout << "Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cin >> m1;
    }
    int m;
    m1 = m2; 
    std::vector<int> lst2(m1);
    for (int i = 0; i < m1; i++) {
        int temp;
        std::cout << "Enter element of lst2: ";
        std::cin >> temp;
        lst2.push_back(temp);
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
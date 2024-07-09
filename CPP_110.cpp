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
    return oddCount == 0 ? "YES" : "NO";
}

int main() {
    std::vector<int> list1, list2;
    int n1, n2;

    // Input the size of the lists
    std::cout << "Enter the size of list1: ";
    std::cin >> n1;
    for (int i = 0; i < n1; i++) {
        std::cout << "Enter element " << i + 1 << " of list1: ";
        int x;
        std::cin >> x;
        list1.push_back(x);
    }

    // Input the size of the lists
    std::cout << "Enter the size of list2: ";
    std::cin >> n2;
    for (int i = 0; i < n2; i++) {
        std::cout << "Enter element " << i + 1 << " of list2: ";
        int x;
        std::cin >> x;
        list2.push_back(x);
    }

    // Call the function and print its result
    std::string output = exchange(list1, list2);
    std::cout << "The result is: " << output << std::endl;

    return 0;
}
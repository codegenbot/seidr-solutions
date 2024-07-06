```cpp
#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    bool isPossible = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            int found = false;
            for (int otherNum : lst2) {
                if (otherNum == num) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return "NO";
            } else {
                isPossible = true;
            }
        }
    }
    return isPossible ? "YES" : "NO";
}

int main() {
    int n1, m1, n2, m2;
    std::cout << "Enter the size of lst1: ";
    std::cin >> n1;
    std::vector<int> lst1(n1);
    std::cout << "Enter elements for lst1: ";
    for (int i = 0; i < n1; i++) {
        std::cin >> lst1[i];
    }
    
    std::cout << "Enter the size of lst2: ";
    std::cin >> m2;
    std::vector<int> lst2(m2);
    std::cout << "Enter elements for lst2: ";
    for (int i = 0; i < m2; i++) {
        std::cin >> lst2[i];
    }
    
    std::string result = exchange(lst1, lst2);
    std::cout << result;
    return 0;
}
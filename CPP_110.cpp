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
    int num;
    while(std::cin >> num) {
        lst1.push_back(num);
    }
    
    std::vector<int> lst2;
    while(std::cin >> num) {
        lst2.push_back(num);
    }

    std::cout << exchange(lst1, lst2) << std::endl;

    return 0;
}
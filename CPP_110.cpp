```cpp
#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    bool hasOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            hasOdd = true;
            break;
        }
    }
    if (!hasOdd) {
        return "YES";
    }
    for (int num : lst2) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    std::cout << exchange({1, 4}, {3, 5}) << std::endl;
    return 0;
}
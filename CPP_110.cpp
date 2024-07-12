```cpp
#include <iostream>
#include <vector>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2);

int main() {
    std::vector<int> lst1 = {1, 3, 5};
    std::vector<int> lst2 = {2, 4, 6};
    std::cout << exchange(lst1, lst2) << std::endl;
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
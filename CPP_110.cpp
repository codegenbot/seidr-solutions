```cpp
#include <iostream>
#include <vector>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2);

int main() {
    std::vector<int> lst1(lst1.begin(), lst1.end());
    std::vector<int> lst2(lst2.begin(), lst2.end());
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
#include <iostream>
#include <vector>
#include <string>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}

int main() {
    std::vector<int> list1 = {2,4};
    std::vector<int> list2 = {1,3};

    std::cout << exchange(list1, list2) << std::endl;
    
    return 0;
}
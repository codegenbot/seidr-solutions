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
    std::vector<int> list1 = {1, 2, 3};
    std::vector<int> list2 = {4, 5};

    std::cout << exchange(list1, list2) << std::endl;

    return 0;
}
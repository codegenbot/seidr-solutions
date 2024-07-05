#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string checkLists(const std::vector<int>& lst1, const std::vector<int>& lst2) {
    bool hasEvenInLst2 = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            hasEvenInLst2 = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    hasEvenInLst2 = true;
                    break;
                }
            }
            if (!hasEvenInLst2) return "NO";
        }
    }
    return "YES";
}

int main() {
    assert(checkLists({100, 200}, {200, 200}) == "YES");
    assert(checkLists({100, 101}, {200, 201}) == "YES");
    assert(checkLists({101, 103}, {201, 203}) == "NO");
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
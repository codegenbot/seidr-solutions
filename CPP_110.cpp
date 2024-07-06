#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    return "YES";
}

int main() {
    std::vector<int> lst1 = {100, 200};
    std::vector<int> lst2 = {200, 200};
    std::cout << (exchange(lst1, lst2) == "YES" ? "Passed" : "Failed") << std::endl;
    return 0;
}
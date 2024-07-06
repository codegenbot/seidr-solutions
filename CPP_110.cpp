```cpp
#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0 && oddCount > 0) {
            lst1.push_back(lst2[i]);
            lst2.erase(lst2.begin() + i);
            i--;
            oddCount--;
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
}
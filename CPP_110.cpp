```cpp
#include <vector>
#include <string>
#include <initializer_list>

std::string exchange(std::initializer_list<int> lst1, std::initializer_list<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "NO");
    return 0;
}
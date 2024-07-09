```cpp
#include <string>
#include <vector>

int exchange(const std::vector<int>& lst1, const std::vector<int>& lst2) {
    int oddCount = 0;
    for (const auto& num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount;
}
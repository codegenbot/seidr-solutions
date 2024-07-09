```cpp
#include <iostream>
#include <vector>

int prod_signs(std::vector<int> signs) {
    int result = 1;
    for (int sign : signs) {
        if (sign < 0) return -1;
        if (sign == 0) return 0;
    }
    return 1;
}

int main() {
    std::cout << prod_signs({-1, 1, 1, 0}) << std::endl;
}
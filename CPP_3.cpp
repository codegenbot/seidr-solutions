```cpp
#include <vector>

int main() {
    bool result = below_zero({-1, -2, 3, -4});
    std::cout << (result ? "Below zero" : "Not below zero") << std::endl;
}
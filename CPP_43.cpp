```cpp
#include <iostream>

bool pairs_sum_to_zero(int a, int b) {
    if (a + b == 0) {
        return true;
    }
    return false;
}

int main() {
    int a = -3; 
    int b = 9; 
    std::cout << (pairs_sum_to_zero(a, b) ? "True" : "False");
    return 0;
}
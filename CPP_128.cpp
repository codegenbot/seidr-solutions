```cpp
#include <iostream>

int prod_signs(int sign1, int sign2, int sign3) {
    int result = 1;
    if (sign1 < 0 || sign2 < 0 || sign3 < 0) return -1;
    if (sign1 == 0 || sign2 == 0 || sign3 == 0) return 0;
    return 1;
}

int main() {
    std::cout << prod_signs(-1, 1, 1) << std::endl; 
}
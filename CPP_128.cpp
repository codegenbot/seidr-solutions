```cpp
#include <cassert>

int prod_signs(vector<int> numbers) {
    int sign = 1;
    for (int number : numbers) {
        if (number != 0) {
            sign *= (number > 0 ? 1 : -1);
        }
    }
    return sign;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    int result = prod_signs({1, -2, 3, 0});
    return 0;
}
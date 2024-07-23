```cpp
#include <cmath>
#include <assert.h>

bool is_simple_power(int x, int n);

int main() {
    assert(is_simple_power(1, 12));
}

bool is_simple_power(int x, int n){
    double y = pow(n, std::log(x) / std::log(n));
    return (y + 0.5) == x;
}
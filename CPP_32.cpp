```cpp
#include <cstdio>
#include <cmath>
#include <vector>

float find_zero(const std::vector<double>& coeffs, int n) {
    float x = 0;
    for (int i = 0; i < n; i++) {
        x += coeffs[i] * pow(x, i);
    }
    return x;
}

float poly(const std::vector<double>& coeffs, int n) {
    float y = 0;
    for (int i = 0; i < n; i++) {
        y += coeffs[i] * pow(y, i);
    }
    return y;
}

int main() {
    std::vector<double> coeffs = {1, -2, 1};
    float solution = find_zero(coeffs, 3);
    printf("The solution is: %f\n", solution);
    assert(abs(poly(coeffs, 3) - solution) < 1e-3);
    return 0;
}
```
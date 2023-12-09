```
#include <cstdio>
#include <cmath>
#include <vector>

float find_zero(const std::vector<float>& coeffs) {
    float x = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        x += coeffs[i] * pow(x, i);
    }
    return x;
}

float poly(const std::vector<float>& coeffs) {
    float y = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        y += coeffs[i] * pow(y, i);
    }
    return y;
}

int main() {
    std::vector<float> coeffs = {1, -2, 1};
    float solution = find_zero(coeffs);
    printf("The solution is: %f\n", solution);
    assert(abs(poly(coeffs) - solution) < 1e-3);
    return 0;
}
```
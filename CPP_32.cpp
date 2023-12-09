```
#include <cstdio>
#include <cmath>

float find_zero(float coeffs[], int n) {
    float x = 0;
    for (int i = 0; i < n; i++) {
        x += coeffs[i] * pow(x, i);
    }
    return x;
}

float poly(float coeffs[], int n) {
    float y = 0;
    for (int i = 0; i < n; i++) {
        y += coeffs[i] * pow(y, i);
    }
    return y;
}

int main() {
    float coeffs[] = {1, -2, 1};
    float solution = find_zero(coeffs, 3);
    printf("The solution is: %f\n", solution);
    assert(abs(poly(coeffs, 3) - solution) < 1e-3);
    return 0;
}
```
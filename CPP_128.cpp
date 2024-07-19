````
#include <cassert>

int prod_signs(int arr[], int n) {
    int sign = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            sign *= (arr[i] > 0 ? 1 : -1);
        }
    }
    return sign;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    int result = prod_signs({1, -2, 3, 0});
    return 0;
}
```
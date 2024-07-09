#include <cassert>

long long special_factorial(int n) {
    if (n <= 1)
        return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
        for (int j = 2; j <= i; j++)
            result *= j;
    }
    return result;

}

int main() {
    assert(special_factorial(1) == 1);
    // Add your test cases here
    return 0;
}
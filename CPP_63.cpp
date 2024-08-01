#include <cassert>

int fibfib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;
    int a = 0, b = 0, c = 1, res = 0;
    for (int i = 3; i <= n; ++i) {
        res = a + b + c;
        a = b;
        b = c;
        c = res;
    }
    return res;
}

int main() {
    int n = 14;
    int result = fibfib(n);
    // You can use result for further processing here
}
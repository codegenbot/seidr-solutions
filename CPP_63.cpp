Here is the completed code:

```cpp
int fibfib(int n) {
    if (n <= 1) return 0;
    int a = 0, b = 0, c = 1, d = 0;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b + c;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}
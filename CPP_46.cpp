int fib4(int n) {
    int a = 0, b = 0, c = 2, d = 0, e = 0;
    for (int i = 4; i <= n; ++i) {
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    return e;
}

int main() {
    assert(fib4(12) == 386);
    return 0;
}
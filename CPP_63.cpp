if (nyn == 0) return 0;
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
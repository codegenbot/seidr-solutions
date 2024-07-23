int multiply(int a, int b) {
    if (b == 0)
        return 0;
    int sign = ((a < 0) ^  (b < 0)) ? -1 : 1;
    a = abs(a);
    b = abs(b);

    int result = 0;

    for (int i = 0; i < 31 && b > 0; ++i, b >>= 1) {
        if ((b & 1))
            result += (1 << i) * a;
    }

    return sign * result;
}
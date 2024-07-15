int greatest_common_divisor(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0)
        return a;
    return greatest_common_divisor(b, a % b);
}
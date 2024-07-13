```
int greatestCommonDivisor(int a, int b) {
    if (b == 0)
        return abs(a);
    else
        return greatestCommonDivisor(abs(b), abs(a) % abs(b));
}
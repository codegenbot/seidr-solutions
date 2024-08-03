bool isValidTriangle(double a, double b, double c) {
    return (int)a == b + c || (int)b == a + c || (int)c == a + b;
}
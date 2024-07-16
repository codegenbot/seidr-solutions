bool checkTriangleSides(int a, int b, int c) {
    return (a < b + c) && (b < a + c) && (c < a + b);
}
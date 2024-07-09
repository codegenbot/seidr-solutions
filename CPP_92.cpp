bool isValidTriangle(float a, float b, float c) {
    return (a < b + c) && (b < a + c) && (c < a + b) && (a == (int)a) && (b == (int)b) && (c == (int)c);
}
bool checkTriangleProperty(float a, float b, float c) {
    return ((int)a == b + c || (int)b == a + c || (int)c == a + b);
}
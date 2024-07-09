float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 0.5 * sqrt((a * pow(b * b + c * c - b * c, 2.0)) / (pow(a, 2.0) + pow(b, 2.0) + pow(c, 2.0)));
    } else {
        return -1;
    }
}
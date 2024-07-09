Here is the completed code:

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 0.5 * sqrt((a * (b * b + c * c - b * c)) / (a * a + b * b + c * c));
    } else {
        return -1;
    }
}
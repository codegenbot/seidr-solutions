Here is the solution:

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 0.5 * sqrt((a * (b * b - c * c)) + (b * (c * c - a * a)) + (c * (a * a - b * b))) / 2;
    } else {
        return -1;
    }
}
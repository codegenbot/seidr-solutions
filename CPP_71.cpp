Here is the completed code:

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        return (sqrt((b * c - a * a) / 2.0)) * 100;
    } else {
        return -1;
    }
}
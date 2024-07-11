Here is the completed code:

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        return round((sqrt((a * b) * c)) / 2.0f);
    } else {
        return -1;
    }
}
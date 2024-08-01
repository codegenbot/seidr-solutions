Here is the completed code:

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return static_cast<float>(0.5 * sqrt(pow((b * c), 2) - pow((a * c), 2) - pow((a * b), 2))) / 2;
    } else {
        return -1;
    }
}
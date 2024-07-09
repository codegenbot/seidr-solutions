Here is the completed code:

float triangle_area(float a, float b, float c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return -1;
    else
        return 0.5 * sqrt((a * (b * b - c * c)) + (b * (c * c - a * a)) + (c * (a * a - b * b))) / 2;
}
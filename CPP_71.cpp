float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return sqrt(c * (c-a) * (c-b));
    else
        return 0.0f;
}
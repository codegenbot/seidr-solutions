float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2.0f;
    if (a + b > c && a + c > b && b + c > a) {
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return roundf(area * 100) / 100.0f;
    } else {
        return -1.0f;
    }
}
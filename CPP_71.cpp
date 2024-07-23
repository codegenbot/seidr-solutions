float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((s * (s - a) * (s - b) * (s - c)) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}
float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        return (a * b * 0.5);
    } else {
        return -1;
    }
}
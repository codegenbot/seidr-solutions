bool right_angle_triangle(int a, int b, int c) {
    if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
        return true;
    }
    return false;
}
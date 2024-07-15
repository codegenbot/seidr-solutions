bool right_angle_triangle(int a, int b, int c) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        return true;
    }
    return false;
}
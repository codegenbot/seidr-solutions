bool right_angle_triangle(float a, float b, float c) {
    return (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a);
}
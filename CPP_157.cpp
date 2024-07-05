bool right_angle_triangle(float a, float b, float c) {
    float max_side = fmax(fmax(a, b), c);
    if (max_side == a) {
        return fabs(a*a - (b*b + c*c)) < 1e-6;
    } else if (max_side == b) {
        return fabs(b*b - (a*a + c*c)) < 1e-6;
    } else {
        return fabs(c*c - (a*a + b*b)) < 1e-6;
    }
}
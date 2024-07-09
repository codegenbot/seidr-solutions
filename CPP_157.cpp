Here is the completed code:

bool right_angle_triangle(float a, float b, float c) {
    float max = fmax(fmax(a, b), c);
    return (max * max == (a * a + b * b));
}
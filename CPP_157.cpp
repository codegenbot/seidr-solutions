bool right_angle_triangle(float a, float b, float c) {
    float maxSide = max(a, max(b, c));
    float sumSquares = pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(maxSide, 2);
    return sumSquares == pow(maxSide, 2);
}
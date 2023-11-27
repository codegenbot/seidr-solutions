bool right_angle_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    
    float maxSide = max(a, max(b, c));
    float sumOfSquares = pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(maxSide, 2);
    
    return sumOfSquares == pow(maxSide, 2);
}
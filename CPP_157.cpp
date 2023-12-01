bool right_angle_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    
    float maxSide = max(max(a, b), c);
    float sumOfSquares = 0;
    
    if (maxSide == a) {
        sumOfSquares = pow(b, 2) + pow(c, 2);
    } else if (maxSide == b) {
        sumOfSquares = pow(a, 2) + pow(c, 2);
    } else {
        sumOfSquares = pow(a, 2) + pow(b, 2);
    }
    
    return (sumOfSquares == pow(maxSide, 2));
}
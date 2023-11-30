bool right_angle_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        return true;
    }
    
    return false;
}
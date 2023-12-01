bool right_angle_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    
    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
        return true;
    }
    
    return false;
}
```cpp
bool right_angle_triangle(float a, float b, float c) {
    if ((a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) && (a >= 0 && b >= 0 && c >= 0))
        return true;
    else
        return false;
}
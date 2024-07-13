Here is the completed code:

```cpp
bool right_angle_triangle(float a, float b, float c) {
    float ab2 = pow((a*a)+(b*b), 0.5);
    if (abs(c-ab2)>0.0001)
        return false;
    float bc2 = pow((b*b)+(c*c), 0.5);
    if (abs(a-bc2)>0.0001)
        return false;
    float ca2 = pow((a*a)+(c*c), 0.5);
    if (abs(b-ca2)>0.0001)
        return true;
    return false;
}
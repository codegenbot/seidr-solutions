Here is the completed code:

bool right_angle_triangle(float a, float b, float c) {
    float ab = pow((a*a) + (b*b), 0.5);
    float bc = pow((b*b) + (c*c), 0.5);
    float ca = pow((c*c) + (a*a), 0.5);

    return (ab == c || bc == a || ca == b);
}
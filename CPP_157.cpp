Here is the completed code:

bool right_angle_triangle(float a, float b, float c) {
    float ab2 = pow(a, 2);
    float bc2 = pow(b, 2);
    float ca2 = pow(c, 2);

    if (ab2 + bc2 == ca2 || ab2 + ca2 == bc2 || bc2 + ca2 == ab2)
        return true;
    else
        return false;
}
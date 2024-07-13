Here is the completed code:

bool right_angle_triangle(float a, float b, float c) {
    float square_a = pow(a, 2);
    float square_b = pow(b, 2);
    float square_c = pow(c, 2);

    if (square_a + square_b == square_c || square_a + square_c == square_b || square_b + square_c == square_a)
        return true;
    else
        return false;
}
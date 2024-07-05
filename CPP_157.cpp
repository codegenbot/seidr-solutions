bool right_angle_triangle(float a, float b, float c) {
    float sides[3] = {a, b, c};
    sort(sides, sides + 3);
    return fabs(sides[2] * sides[2] - (sides[0] * sides[0] + sides[1] * sides[1])) < 1e-6;
}
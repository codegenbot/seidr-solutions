bool right_angle_triangle(float a, float b, float c) {
    float longest_side = std::max(std::max(a, b), c);
    float sum_of_squares = pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(longest_side, 2);
    return sum_of_squares == pow(longest_side, 2);
}
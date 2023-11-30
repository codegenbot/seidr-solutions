bool right_angle_triangle(float a, float b, float c) {
    // Check if a^2 + b^2 = c^2 or a^2 + c^2 = b^2 or b^2 + c^2 = a^2
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2)) {
        return true;
    } else {
        return false;
    }
}
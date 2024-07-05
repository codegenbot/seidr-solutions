bool right_angle_triangle(float a, float b, float c) {
    // Sort the sides so that c is the largest
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    
    // Check the Pythagorean theorem
    return fabs(a * a + b * b - c * c) < 1e-6;
}
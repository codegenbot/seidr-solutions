bool right_angle_triangle(float a, float b, float c) {
    float sides[3] = {a, b, c};
    // Sort the sides array
    for (int i = 0; i < 2; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            if (sides[i] > sides[j]) {
                float temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }
    // Check the Pythagorean theorem
    return fabs(sides[0] * sides[0] + sides[1] * sides[1] - sides[2] * sides[2]) < 1e-6;
}
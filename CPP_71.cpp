float triangle_area(float a, float b, float c) {
    // Check if the sides form a valid triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    // Calculate the area using Heron's formula
    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return round(area * 100) / 100;
}
// Function declaration
float triangle_area(float a, float b, float c) {
    // Check if triangle inequality holds
    if(a + b > c && a + c > b && b + c > a) {
        // Calculate area using Heron's formula
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    } else {
        return -1; // Return -1 if triangle cannot be formed
    }
}

// Test cases
int main() {
    // Assert example test case
    assert (abs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}
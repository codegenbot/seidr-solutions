// Check if sides form a valid triangle
    if (a + b > c && b + c > a && a + c > b) {
        // Calculate semi-perimeter of the triangle
        float s = (a + b + c) / 2;
        // Calculate area using Heron's formula
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100; // Round to 2 decimal places
    }
    return -1;
}
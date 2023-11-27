float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        // calculate the semi-perimeter
        float s = (a + b + c) / 2;
        // calculate the area using Heron's formula
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100; // round to 2 decimal places
    } else {
        return -1;
    }
}
float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a)
        return (sqrt((b * c * a) - (pow(b, 2) * pow(c, 2)) - (pow(a, 2) * pow(b, 2))) / (2.0f));
    else
        return -1.0f;
}
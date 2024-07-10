Here is the completed code:

bool right_angle_triangle(float a, float b, float c) {
    float halfPerimeter = (a + b + c) / 2.0;
    return sqrt(pow(halfPerimeter - a, 2) + pow(halfPerimeter - b, 2) + pow(halfPerimeter - c, 2)) == a && isSquare(a*a + b*b);
}

bool isSquare(float x) {
    int y = (int)sqrt(x);
    return x == y*y;
}
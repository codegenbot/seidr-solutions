bool right_angle_triangle(int a, int b, int c) {
    return a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a;
}

int main() {
    assert(right_angle_triangle(3, 4, 5) == true);
    assert(right_angle_triangle(2, 2, 10) == false);
}
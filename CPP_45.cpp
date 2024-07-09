double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);
    assert(std::abs(triangle_area(5, 12) - 30.0) < 1e-4);
    assert(std::abs(triangle_area(3.5, 7) - 12.25) < 1e-4);
    return 0;
}
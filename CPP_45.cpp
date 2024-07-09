double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);
    assert(std::abs(triangle_area(5, 4) - 10.0) < 1e-4);
    assert(std::abs(triangle_area(7.5, 3) - 11.25) < 1e-4);
    return 0;
}
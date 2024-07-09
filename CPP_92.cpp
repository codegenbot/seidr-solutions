bool any_int(double a, double b, double c) {
    if (static_cast<int>(a) == a && static_cast<int>(b) == b && static_cast<int>(c) == c) {
        if (a == b + c || b == a + c || c == a + b) {
            return true;
        }
    }
    return false;
}
bool any_int(float a, float b, float c) {
    if (a == static_cast<int>(a) && b == static_cast<int>(b) && c == static_cast<int>(c)) {
        if (a == b + c || b == a + c || c == a + b) {
            return true;
        }
    }
    return false;
}
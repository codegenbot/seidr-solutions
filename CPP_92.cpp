Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - b - c) < 1e-9 && a == static_cast<int>(a) &&
        b == static_cast<int>(b) && c == static_cast<int>(c)) {
        return true;
    }
    return false;
}
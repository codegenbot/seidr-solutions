Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - b - c) < 1e-9 && abs(a) + abs(b) + abs(c) == int(a) + int(b) + int(c)) {
        return true;
    }
    return false;
}
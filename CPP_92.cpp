Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 1e-9 || abs(b - (a + c)) < 1e-9 || abs(c - (a + b)) < 1e-9)
        return true;
    return false;
}
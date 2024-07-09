Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.01f && abs(b - (a + c)) < 0.01f && abs(c - (a + b)) < 0.01f) {
        return true;
    }
    return false;
}
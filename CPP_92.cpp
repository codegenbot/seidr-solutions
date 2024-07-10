Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.001 || abs(b - (a + c)) < 0.001 || abs(c - (a + b)) < 0.001)
        return true;
    else
        return false;
}
Here is the completed code:

bool any_int(float a, float b, float c) {
    if (fmod(a + b - c, 1) == 0 || fmod(a + c - b, 1) == 0 || fmod(b + c - a, 1) == 0)
        return true;
    return false;
}
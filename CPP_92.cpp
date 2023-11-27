bool any_int(float a, float b, float c) {
    if (a == (b + c) || b == (a + c) || c == (a + b)) {
        if (a == floor(a) && b == floor(b) && c == floor(c)) {
            return true;
        }
    }
    return false;
}
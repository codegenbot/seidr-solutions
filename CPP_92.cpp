bool any_int(double a, int b, int c) {
    if ((int)a == b + c || (int)b == a + c || (int)c == a + b) {
        return true;
    }
    return false;
}
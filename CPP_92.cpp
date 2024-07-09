Here is the completed code:

bool any_int(float a, float b, float c) {
    return (a == b + c) || (b == a + c) || (c == a + b);
}
Here is the completed code:

bool any_int(float a, float b, float c) {
    return (int(a) == a && int(b) == b && int(c) == c) && (a == b + c || a == c + b || b == c + a);
}
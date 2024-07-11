Here is the completed code:

bool any_int(float a, float b, float c) {
    return (a == b + c || a == b - c || a == c + b || a == c - b) && (a == static_cast<int>(a)) && (b == static_cast<int>(b)) && (c == static_cast<int>(c));
}
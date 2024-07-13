Here is the completed code:

bool any_int(float a, float b, float c) {
    if (a == static_cast<int>(a)) return a == b + c || a == b || a == c;
    else return false;
}
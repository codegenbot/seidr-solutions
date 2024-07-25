Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.0001) {
        return true;
    } else {
        return false;
    }
}
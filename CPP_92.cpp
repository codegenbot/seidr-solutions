Here is the completed code:

bool any_int(float a, float b, float c) {
    if (round(a) == round(b) + round(c) || round(a) + round(b) == round(c)) {
        return true;
    }
    return false;
}
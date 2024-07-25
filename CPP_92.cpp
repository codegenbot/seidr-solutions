Here is the completed code:

bool any_int(float a, float b, float c) {
    if (floor(a) + floor(b) == floor(c)) || floor(a) + floor(c) == floor(b) || floor(b) + floor(c) == floor(a))
        return true;
    else
        return false;
}
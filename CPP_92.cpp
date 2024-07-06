bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if (ai == bi + ci || bi == ai + ci || ci == ai + bi)
        return true;
    else
        return false;
}

bool any_int(float a, float b, float c) {
    bool result = false;
    
    if ((int)a == (int)b + (int)c || (int)b == (int)a + (int)c || (int)c == (int)a + (int)b)
        result = true;

    return result;
}
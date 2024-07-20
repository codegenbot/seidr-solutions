Here's the completed code:

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if ((ai == ai + bi + ci) || (bi == ai + bi + ci) || (ci == ai + bi + ci))
        return true;
    else
        return false;
}
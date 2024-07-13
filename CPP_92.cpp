Here's the completed code:

bool any_int(float a, float b, float c) {
    int ai = a;
    int bi = b;
    int ci = c;

    return (ai == bi + ci) || (bi == ai + ci) || (ci == ai + bi);
}
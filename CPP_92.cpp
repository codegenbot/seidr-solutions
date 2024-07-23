bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    return (ai == ai + bi + ci) || (bi == bi + ai + ci) || (ci == ci + ai + bi);
}
bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    return (a == bi + ci || a == bi || a == ci || b == bi + ci || b == bi || b == ci || c == bi + ci || c == bi || c == ci);
}
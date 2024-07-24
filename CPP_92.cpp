bool any_int(float a, float b, float c){
    int ai = (int) a;
    int bi = (int) b;
    int ci = (int) c;

    return ((a == ai + bi + ci) || (b == bi + ci + ai) || (c == bi + ci + ai));
}
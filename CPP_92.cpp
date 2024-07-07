Here is the completed code:

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if(a == ai && b == bi && c == ci)
        return (a == bi + ci || a == ci + bi);
    else
        return false;
}
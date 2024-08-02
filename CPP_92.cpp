Here is the completed code:

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if ((ai == bi + ci) || (ai == ci + bi) || (bi == ai + ci) || (bi == ci + ai) || (ci == ai + bi) || (ci == bi + ai)) {
        return true;
    } else {
        return false;
    }
}
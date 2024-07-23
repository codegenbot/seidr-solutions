bool any_int(float a, float b, float c) {
    long long ai = (long long)a;
    long long bi = (long long)b;
    long long ci = (long long)c;

    if (ai == bi + ci || ai == ci + bi || bi == ai + ci || bi == ci + ai || ci == ai + bi || ci == bi + ai)
        return true;
    else
        return false;
}
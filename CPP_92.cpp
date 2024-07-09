Here is the completed code:

bool any_int(float a, float b, float c) {
    int ai = static_cast<int>(a);
    int bi = static_cast<int>(b);
    int ci = static_cast<int>(c);

    if (ai == bi + ci || ai == bi - ci || ai == ci + bi || ai == ci - bi) {
        return true;
    }

    if (bi == ai + ci || bi == ai - ci || bi == ci + ai || bi == ci - ai) {
        return true;
    }

    if (ci == ai + bi || ci == ai - bi || ci == bi + ai || ci == bi - ai) {
        return true;
    }

    return false;
}
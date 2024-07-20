bool any_int(float a, float b, float c){
    if (round(a) + round(b) == round(c) || round(a) + round(c) == round(b) || round(b) + round(c) == round(a)) {
        return true;
    }
    return false;
}
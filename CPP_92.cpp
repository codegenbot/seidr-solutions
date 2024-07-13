bool any_int(float a, float b, float c){
    if (round(a) == a && round(b) == b && round(c) == c) {
        return (a == b + c || a == c + b || b == c + a);
    }
    return false;
}
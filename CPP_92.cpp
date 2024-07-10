bool any_int(float a, float b, float c){
    if (abs(a - (b + c)) < 0.0001 && isfinite(a) && isfinite(b) && isfinite(c))
        return true;
    else
        return false;
}
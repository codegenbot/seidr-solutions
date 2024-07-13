bool any_int(float a, float b, float c){
    if(floor(a) + floor(b) == floor(c)) {
        return true;
    } else if (floor(a) + floor(b) == floor(a)) {
        return true;
    } else if (floor(a) + floor(c) == floor(b)) {
        return true;
    } else if (floor(b) + floor(c) == floor(a)) {
        return true;
    }
    return false;
}
bool any_int(float a, float b, float c){
    if(int(a) + int(b) == int(c) || int(a) + int(c) == int(b) || int(b) + int(c) == int(a)){
        return true;
    }
    return false;
}
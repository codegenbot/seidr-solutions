bool any_int(float a, float b, float c){
    if(a == int(b+c) || b == int(a+c) || c == int(a+b)){
        return true;
    }
    return false;
}
bool any_int(float a, float b, float c){
    if((a == b + c) || (b == a + c) || (c == a + b)){
        if(floor(a) == a && floor(b) == b && floor(c) == c){
            return true;
        }
    }
    return false;
}
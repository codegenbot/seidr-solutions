bool check_triangle_inequality(float a, float b, float c) {
    if(a < b + c && b < a + c && c < a + b){
        return true;
    }
    return false;
}
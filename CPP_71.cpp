float triangle_area(float a, float b, float c){
    if((a + b > c) && (a + c > b) && (b + c > a)){
        return round(0.5 * sqrt(pow(a, 2) * pow(b, 2) - pow(c, 2)), 2);
    } else {
        return -1;
    }
}
float triangle_area(float a, float b, float c){
    if(a + b > c && a + c > b && b + c > a) {
        return (sqrt((a*b*c)*(a+b+c))) / 4;
    } else {
        return -1.0f;
    }
}
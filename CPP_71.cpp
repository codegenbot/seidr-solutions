float triangle_area(float a, float b, float c){
    if((a + b > c) && (a + c > b) && (b + c > a)){
        return round(((a*b*c)/(4*sqrt((pow(a,2)+pow(b,2)+pow(c,2))/16.0)))*100.0)/100.0;
    } else {
        return -1;
    }
}
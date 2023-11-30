float triangle_area(float a, float b, float c){
    if(a+b>c && b+c>a && c+a>b){
        float s = (a+b+c)/2;
        float area = sqrt(s*(s-a)*(s-b)*(s-c));
        return round(area * 100) / 100; // round to 2 decimal points
    }
    else{
        return -1;
    }
}
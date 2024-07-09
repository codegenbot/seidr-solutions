double triangle_area(double a, double b, double c) { 
    if(a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    return -1;
}
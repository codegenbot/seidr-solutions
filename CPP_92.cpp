bool isValidTriangle(double a, double b, double c) {
    if(a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
}
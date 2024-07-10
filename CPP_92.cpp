bool isValidTriangle(double a, double b, double c) {
    if((int)a == b + c || (int)b == a + c || (int)c == a + b)
        return true;
    else
        return false;
}
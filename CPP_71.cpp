double triangle_area(double a, double b, double c) {
    if (a + b > c && b + c > a && a + c > b) {
        double s = (a + b + c) / 2;
        return round(sqrt(s * (s - a) * (s - b) * (s - c)) * 100) / 100;
    } else {
        return -1;
    }
}
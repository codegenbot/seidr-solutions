float s = (a + b + c) / 2;
    float area = -1;
    if (a + b > c && b + c > a && a + c > b) {
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    return area;
}
float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    if (a + b > c && b + c > a && a + c > b) {
        return roundf(area * 100) / 100;
    }
    return -1;
}
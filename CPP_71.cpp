float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return (a + b > c && b + c > a && a + c > b) ? round(area * 100) / 100 : -1;
}
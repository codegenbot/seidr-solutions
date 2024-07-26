float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    if (a + b > c && a + c > b && b + c > a) {
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}
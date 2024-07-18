float s, area;
    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    }
    else {
        return -1;
    }
}
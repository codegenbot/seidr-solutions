float s = (a + b + c) / 2;
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        return round(sqrt(s * (s - a) * (s - b) * (s - c)) * 100) / 100;
    } else {
        return -1;
    }
}
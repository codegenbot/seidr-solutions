float s = (a + b + c) / 2;
    if (a + b > c && a + c > b && b + c > a) {
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1;
    }
}
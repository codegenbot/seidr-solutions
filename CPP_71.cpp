float s = (a + b + c) / 2;
    if (a + b > c && b + c > a && a + c > b) {
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1;
    }
}
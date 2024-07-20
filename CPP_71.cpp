if(a + b > c && b + c > a && a + c > b) {
        float s = (a + b + c) / 2;
        return round(sqrt(s * (s - a) * (s - b) * (s - c)) * 100) / 100;
    } else {
        return -1;
    }
}
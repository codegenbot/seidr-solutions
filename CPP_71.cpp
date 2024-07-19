if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2.0;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100.0) / 100.0;
    } else {
        return -1;
    }
}
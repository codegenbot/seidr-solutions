float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    if (area > 0)
        return round(area * 100) / 100;
    else
        return -1;
}
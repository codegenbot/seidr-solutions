// Sort sides in ascending order
    if(a > c) swap(a, c);
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);

    return fabs(pow(a, 2) + pow(b, 2) - pow(c, 2)) < 1e-6;
}
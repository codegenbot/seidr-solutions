while (b != 0) {
    int t = b;
    b = a % b;
    a = t;
}
return a;
}
sort(l.begin(), l.end(), [](int a, int b) {
    return a % 3 == 0 ? true : b % 3 == 0 ? false : a < b;
});
return l;
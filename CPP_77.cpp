int c = cbrt(abs(a));
    return (a == 0 ? true : (c * c * c == abs(a)));
}
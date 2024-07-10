int a = 0, b = 0, c = 0;
    stringstream s1(x), s2(n);
    s1 >> a >> '/' >> b;
    s2 >> c >> '/';
    
    return (a*c == b);
}
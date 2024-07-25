if (a > b && a > c)
        return (a * a == b * b + c * c);
    else if (b > a && b > c)
        return (b * b == a * a + c * c);
    else
        return (c * c == a * a + b * b);
}
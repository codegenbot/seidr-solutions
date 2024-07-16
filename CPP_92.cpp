if (a == b + c || b == a + c || c == a + b)
        return (a == (int)a && b == (int)b && c == (int)c);
    else
        return false;
}
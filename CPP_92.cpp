if ((int)a == a && (int)b == b && (int)c == c) {
        return (a == b + c || b == a + c || c == a + b);
    }
    return false;
}
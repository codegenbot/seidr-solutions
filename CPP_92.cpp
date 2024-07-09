return (int(a) == b + c || int(b) == a + c || int(c) == a + b) && (a == int(a) && b == int(b) && c == int(c));
}
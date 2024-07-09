bool any_int(int a, int b, int c) {
    if (a == b + c || b == a + c || c == a + b)
        return true;
    else
        return false;
}
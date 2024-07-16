if ((a == b + c) || (b == a + c) || (c == a + b)) {
        if ((int)a == a && (int)b == b && (int)c == c) {
            return true;
        }
    }
    return false;
}
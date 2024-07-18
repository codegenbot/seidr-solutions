if ((int)a == a && (int)b == b && (int)c == c) {
        if (a == b + c || b == a + c || c == a + b) {
            return true;
        }
    }
    return false;
}
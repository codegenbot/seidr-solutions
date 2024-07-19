if (x == 1) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (fmod(log(x) / log(i), 1.0) == 0 && pow(i, int(log(x) / log(i))) == x) {
            return true;
        }
    }
    return false;
}
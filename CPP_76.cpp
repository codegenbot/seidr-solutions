if (x <= 0 || n <= 0) {
        return false;
    }

    float res = log(x) / log(n);
    return (res == (int)res);
}
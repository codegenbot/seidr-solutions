double num = stod(value);
    int res = round(num);
    if (num - res == 0.5) {
        res = ceil(num);
    } else if (num - res == -0.5) {
        res = floor(num);
    }
    return res;
}
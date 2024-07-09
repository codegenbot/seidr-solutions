float num = stof(value);
    int rounded = round(num);
    if (num - rounded == 0.5 || num - rounded == -0.5) {
        return rounded + (num > 0 ? 1 : -1);
    }
    return round(num);
}
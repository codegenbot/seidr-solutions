double num = stod(value);
    int result = round(num);
    if (num - result == 0.5 || num - result == -0.5) {
        result += (num > 0) ? 1 : -1;
    }
    return result;
}
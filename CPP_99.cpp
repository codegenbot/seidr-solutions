double num = stod(value);
    int rounded = static_cast<int>(round(num));
    if (num - rounded == 0.5) {
        return num > 0 ? rounded + 1 : rounded - 1;
    }
    return rounded;
}
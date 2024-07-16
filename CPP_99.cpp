double num = stod(value);
    int rounded = static_cast<int>(round(num));
    if (num - rounded == 0.5) {
        return static_cast<int>(ceil(num));
    } else {
        return rounded;
    }
}
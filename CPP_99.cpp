double num = stod(value);
    int rounded_num = round(num);
    if (num - rounded_num == 0.5 || num - rounded_num == -0.5) {
        return rounded_num + (num > 0 ? 1 : -1);
    }
    return rounded_num;
}
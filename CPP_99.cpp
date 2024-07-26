double num = stod(value);
    int rounded_num = round(num);
    if (num - rounded_num == 0.5) {
        return num > 0 ? ceil(num) : floor(num);
    }
    return rounded_num;
}
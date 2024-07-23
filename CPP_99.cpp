double num = stod(value);
    int rounded_num = round(num);
    if (num - floor(num) == 0.5) {
        if (num > 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    } else {
        return rounded_num;
    }
}
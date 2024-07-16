double num = stod(value);
    int rounded_num = static_cast<int>(round(num));
    if (num - rounded_num > 0.5) {
        return ceil(num);
    } else if (num - rounded_num < -0.5) {
        return floor(num);
    } else {
        if (num > 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    }
}
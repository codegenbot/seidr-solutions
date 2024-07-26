double num = stod(value);
    int roundedNum = static_cast<int>(round(num));
    if (num - roundedNum > 0.5) {
        return ceil(num);
    } else if (num - roundedNum < -0.5) {
        return floor(num);
    } else {
        return (num > 0) ? ceil(num) : floor(num);
    }
}
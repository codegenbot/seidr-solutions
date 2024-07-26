double num = stod(value);
    int rounded_num = static_cast<int>(round(num));
    return (num - rounded_num > 0) ? ceil(num) : floor(num);
}
double num = stod(value);
    int rounded_num = (num >= 0) ? floor(num + 0.5) : ceil(num - 0.5);
    return rounded_num;
}
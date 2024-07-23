double num = stod(value);
    int rounded_num = static_cast<int>(num >= 0 ? num + 0.5 : num - 0.5);
    return rounded_num;
}
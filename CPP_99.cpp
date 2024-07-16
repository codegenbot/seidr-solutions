double num = stod(value);
    int rounded_num = static_cast<int>(num + (num >= 0 ? 0.5 : -0.5));
    return rounded_num;
}
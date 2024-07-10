double num = stod(value);
    int rounded = static_cast<int>(round(num));
    return (num - rounded >= 0.5) ? ceil(num) : floor(num);
}
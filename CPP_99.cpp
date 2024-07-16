double num = stod(value);
    int intNum = static_cast<int>(round(num));
    return (num - intNum >= 0.5) ? ceil(num) : floor(num);
}
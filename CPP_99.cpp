double num = stod(value);
    int rounded = static_cast<int>(num < 0 ? ceil(num - 0.5) : floor(num + 0.5));
    return rounded;
}
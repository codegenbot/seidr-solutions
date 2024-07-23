double num = stod(value);
    return num < 0 ? ceil(num - 0.5) : floor(num + 0.5);
}
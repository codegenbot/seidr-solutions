double num = stod(value);
    int result = static_cast<int>(num >= 0 ? num + 0.5 : num - 0.5);
    return result;
}
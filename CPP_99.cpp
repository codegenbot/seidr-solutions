double num = stod(value);
    return num >= 0 ? static_cast<int>(num + 0.5) : static_cast<int>(num - 0.5);
}
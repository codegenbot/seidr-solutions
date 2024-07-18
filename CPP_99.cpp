double num = stod(value);
    if (num > 0) {
        return static_cast<int>(num + 0.5);
    } else {
        return static_cast<int>(num - 0.5);
    }
}
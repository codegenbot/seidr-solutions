double num = stod(value);
    int rounded = static_cast<int>(round(num));
    if (num - rounded < 0) {
        return static_cast<int>(floor(num));
    } else {
        return static_cast<int>(ceil(num));
    }
}
double num = stod(value);
    int rounded = static_cast<int>(round(num));
    return (num - rounded > 0) ? static_cast<int>(ceil(num)) : static_cast<int>(floor(num));
}
double num = stod(value);
    int rounded = static_cast<int>(num >= 0 ? floor(num + 0.5) : ceil(num - 0.5));
    return rounded;
}
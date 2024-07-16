double num = stod(value);
    int result = num >= 0 ? floor(num + 0.5) : ceil(num - 0.5);
    return result;
}
double num = stod(value);
    return num >= 0 ? floor(num + 0.5) : ceil(num - 0.5);
}
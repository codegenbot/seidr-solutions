double num = stod(value);
    return num >= 0 ? (int)floor(num + 0.5) : (int)ceil(num - 0.5);
}
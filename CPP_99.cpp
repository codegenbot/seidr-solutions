double num = stod(value);
    int intPart = (int)num;
    return (num - intPart > 0.5) ? intPart + 1 : (num - intPart < -0.5) ? intPart - 1 : round(num);
}
double num = stod(value);
    int intNum = static_cast<int>(num);
    return (num - intNum > 0.5) ? ceil(num) : (num - intNum < -0.5) ? floor(num) : round(num);
}
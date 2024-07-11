float integerPart;
    float decimalPart = modf(number, &integerPart);
    return decimalPart;
}
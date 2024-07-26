float intPart;
    float decPart = modf(number, &intPart);
    return decPart;
}
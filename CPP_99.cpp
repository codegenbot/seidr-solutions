double num = stod(value);
    int intNum = static_cast<int>(round(num));
    if (num - intNum < 0) {
        return intNum - 1;
    } else {
        return intNum + 1;
    }
}
double number = stod(value);
    int result = round(number);
    if (number - result == 0.5) {
        if (number < 0) {
            result = ceil(number);
        } else {
            result = floor(number);
        }
    }
    return result;
}
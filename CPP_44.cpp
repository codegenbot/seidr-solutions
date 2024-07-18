string result = "";
    while (x > 0) {
        char digit = (x % base) + '0';
        result = digit + result;
        x /= base;
    }
    return result;
}
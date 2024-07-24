string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x = x / base;
    }
    return result;
}
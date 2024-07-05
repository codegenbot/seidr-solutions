int closest_integer(string value) {
    double num = stod(value);
    int result = (int)num;
    if (num > 0) {
        return (num - result >= 0.5) ? result + 1 : result;
    } else {
        return (result - num >= 0.5) ? result - 1 : result;
    }
}
int closest_integer(const string& value) {
    double num = stod(value);
    int closestInt = round(num);
    if (fabs(num - closestInt) == 0.5) {
        closestInt = (num - closestInt > 0) ? ceil(num) : floor(num);
    }
    return closestInt;
}
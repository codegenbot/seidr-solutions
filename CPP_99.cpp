
int closest_integer(string value) {
    double num = stod(value);
    int rounded = static_cast<int>(round(num));
    if (abs(num - floor(num)) == 0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    }
    return rounded;
}
int closest_integer(std::string value) {
    double num = stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}
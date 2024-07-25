int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int res = std::round(num);
    if (std::abs(num - res) == 0.5) {
        res = (num - res > 0) ? std::ceil(num) : std::floor(num);
    }
    return res;
}
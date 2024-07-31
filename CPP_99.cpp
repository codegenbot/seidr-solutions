int closest_integer(const std::string& value) {
    float num = std::stof(value);
    int rounded = std::round(num);
    if (std::abs(num - rounded) == 0.5f) {
        return (num > 0) ? std::ceil(num) : std::floor(num);
    } else {
        return std::round(num);
    }
}
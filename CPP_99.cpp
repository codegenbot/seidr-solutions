int closest_integer(std::string value) {
    double num = std::stod(value);
    int closest = std::round(num);
    if (std::abs(num - closest) == 0.5) {
        closest = (num > closest) ? std::ceil(num) : std::floor(num);
    }
    return closest;
}
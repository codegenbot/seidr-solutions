int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int closestInt = static_cast<int>(num + 0.5);
    return closestInt;
}
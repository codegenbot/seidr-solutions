std::string closest_integer(double num) {
    int integer = static_cast<int>(num);
    if (abs(num - integer) > abs(num - (integer + 1))) {
        return std::to_string(integer + 1);
    } else {
        return std::to_string(integer);
    }
}
int closest_integer(double num) {
    if (num >= 0) {
        return static_cast<int>(num);
    } else {
        return -static_cast<int>(-num);
    }
}
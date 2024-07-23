double num = stod(value);
    int closest_int = round(num);
    if (num - closest_int == 0.5) {
        closest_int = (num > 0) ? ceil(num) : floor(num);
    }
    return closest_int;
}
double num = stod(value);
    int closest_int = round(num);
    if (num - closest_int == 0.5) {
        closest_int = ceil(num);
    } else if (num - closest_int == -0.5) {
        closest_int = floor(num);
    }
    return closest_int;
}
double num = stod(value);
    int closest_num = round(num);
    if (num > 0.0 && (num - closest_num) == 0.5) {
        closest_num = ceil(num);
    } else if (num < 0.0 && (closest_num - num) == 0.5) {
        closest_num = floor(num);
    }
    return closest_num;
}
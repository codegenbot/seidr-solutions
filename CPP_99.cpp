double num = stod(value);
    int closest = round(num);
    if (num - closest == 0.5) {
        closest = ceil(num);
    } else if (num - closest == -0.5) {
        closest = floor(num);
    }
    return closest;
}
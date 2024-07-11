float num = stof(value);
    int closest = round(num);
    if (num - closest == 0.5) {
        closest = ceil(num);
    }
    return closest;
}
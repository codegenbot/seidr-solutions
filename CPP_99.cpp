double num = stod(value);
    int closestInt = round(num);
    
    if (closestInt > num) {
        return ceil(num);
    } else if (closestInt < num) {
        return floor(num);
    } else {
        if (num < 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    }
}
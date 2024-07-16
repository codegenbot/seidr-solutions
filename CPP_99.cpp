float num = stof(value);
    int roundedNum = round(num);
    if (num > 0) {
        return (num - roundedNum) > 0.5 ? ceil(num) : floor(num);
    } else {
        return (num - roundedNum) < -0.5 ? floor(num) : ceil(num);
    }
}
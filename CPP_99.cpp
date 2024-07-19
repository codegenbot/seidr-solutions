double num = stod(value);
    int rounded = round(num);
    return rounded > num ? floor(num) : ceil(num);
}